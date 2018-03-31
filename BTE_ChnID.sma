/* 本插件由 AMXX-Studio 中文版自动生成*/
/* UTF-8 func by www.DT-Club.net */

#include <amxmodx>
#include <fakemeta>
native bte_setname(id,name[])
#define PLUGIN_NAME	"CS CHN ID"
#define PLUGIN_VERSION	"1.0"
#define PLUGIN_AUTHOR	"New BTE TEAM"
#define NAME_MAX	32

new const URL[]="addons/amxmodx/configs/randname/last.txt"
new const URL2[]="addons/amxmodx/configs/randname/first.txt"

new szNamelist[33][32],szNamelist2[33][32],szNamelistCout[33][32]
new iNameCheck[33]
new g_NameUse[33]
new iAllNum,iAllNum2
public plugin_precache()
{
	loadnamelist()
}
public plugin_init()
{
	register_plugin(PLUGIN_NAME, PLUGIN_VERSION, PLUGIN_AUTHOR);
}
public client_connect(id) //client_putinserver
{
	if(!is_user_bot(id)) return
	//set_task(1.0,"ChangeName",id) //做个延迟比较好
	ChangeName(id);
}
public client_disconnect(id)
{
	iNameCheck[g_NameUse[id]]=0
	g_NameUse[id] = 0
}

public ChangeName(id)
{
	randname(id);
	for(new i=1;i<=iAllNum;i++)
	{
		if(CheckName(id,i))
		{
			//bte_setname(id,szNamelist[i]) // in fakemeta (modified)
			set_user_info(id, "name", szNamelistCout[id]);
			iNameCheck[i] = 1
			g_NameUse[id]=i
			break
		}
	}
}
public loadnamelist()
{
	new hFile = fopen(URL, "rt"),hFile2 = fopen(URL2, "rt");
	if(!hFile||!hFile2)
	{
		log_amx("文件读取错误")
		set_fail_state("文件读取错误")
	}
	new szLine[128],iLine=1,szLine2[128],iLine2=1;
	while (!feof(hFile))
	{
		fgets(hFile, szLine,127)
		replace(szLine, 127, "^n", "")
		trim(szLine)
		if(szLine[0]==';') continue
		copy(szNamelist[iLine],31,szLine)
		iLine++
		if(iLine>NAME_MAX) break
	}
	iAllNum = iLine-1
	while (!feof(hFile2))
	{
		fgets(hFile2, szLine2,127)
		replace(szLine2, 127, "^n", "")
		trim(szLine2)
		if(szLine2[0]==';') continue
		copy(szNamelist2[iLine2],31,szLine2)
		iLine2++
		if(iLine2>NAME_MAX) break
	}
	iAllNum2 = iLine2-1
}
public CheckName(id,iRan) //重名检测
{
	if(iNameCheck[iRan]) return 0
	return 1
}
public randname(id)
{
	format(szNamelistCout[id],128,"%s%s",szNamelist[random_num(1,iAllNum)],szNamelist2[random_num(1,iAllNum2)])
}
/* AMXX-Studio Notes - DO NOT MODIFY BELOW HERE
*{\\ rtf1\\ ansi\\ ansicpg936\\ deff0{\\ fonttbl{\\ f0\\ fnil\\ fcharset134 Tahoma;}}\n\\ viewkind4\\ uc1\\ pard\\ lang2052\\ f0\\ fs16 \n\\ par }
*/
