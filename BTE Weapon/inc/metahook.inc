// MetaHook Include
// Version 1.0
// Author: Martin
// Editor: Csoldjb (Thanks to Martin!!!)

#if defined _metahook_included
	#endinput
#endif
#define _metahook_included

#if AMXX_VERSION_NUM >= 175
 #pragma reqlib metahook
 #if !defined AMXMODX_NOAUTOLOAD
  #pragma loadlib metahook
 #endif
#else
 #pragma library metahook
#endif

// �������ʾһ��TGA (����Ҫ���� �յ���Ϣ�� MetaHook���Զ�����)
// ��������Ϊ
// ���id szTga-TGA����(���Ҫ��ʾtest.tga ֱ���� test����)  iFunc-���ò���
// iCenter-�Ƿ������ʾ  rgbΪ��ɫֵ xyΪ��Ļ����(0.0-1.0)
// iMode = ͼƬ��Ϣ��ʾģʽ [0 - ������ʾ // 1 - ���� // 2 - ���� // 3 - ���뵭��] iChan-Ƶ�� fTime-��ʾʱ��
native MH_DrawTargaImage(id,szTga[],iFunc,iCenter,r,g,b,Float:x,Float:y,iMode,iChan,Float:fTime) //
native MH_BuyMenu(id,iType,iPage,iHaveNextPage,sz[])
native MH_SendData(id,iType,iData,szData[])

// ����һ�һ������ʱ
// szΪ��ʾ timeΪʱ��
native MH_DrawCountDown(id,sz[],itime)

// �رյ���ʱ��timeΪ0Ҳ���Զ��رյ���ʱ��
native MH_DrawCountDownReset(id)

// �ṩһ�����������
native MH_RespawnBar(id,i,Float:time)

native MH_IsMetaHookPlayer(iIndex) // �ж�����Ƿ�ʹ��MetaHook

// �ṩһ���ı���ʾ������Բ��W9���壩
// iSale �����С fLastTime �������ʱ�� fFadeTime ���嵭�뵭��ʱ�� iFillBg�Ƿ���Ʊ��� iChanƵ��
native MH_DrawFontText(id,text[],icenter,Float:x,Float:y,r,g,b,iSale,Float:fLastTime,Float:fFadeTime,iFillBg,iChannel)

// ����BIK�ļ�
native MH_PlayBink(id,sBink[],Float:x,Float:y,iR,iG,iB,iLoop,iPlay,iCenter,iFullScreen)


native MH_DrawExtraAmmo(iIndex,iType)  // �ڲ�API
native MH_Quest(id,i1,i2,i3)  // �ڲ�API
native MH_WeaponSkin(id,i1,sz[],i2)  // �ڲ�API
native MH_SendDRRank(id,iRank,id2,s[])  // �ڲ�API
native MH_ChangeTattoo(id,sTattoo[],iType)  // �ڲ�API(�ı�����/�ֱ���)
native MH_SendClientModRunning(iIndex,iModRunning)  // �ڲ�API
native MH_SpecialEvent(iIndex , iSpecialEvent)  // �ڲ�API
// ��ʾ�����һ��ͼƬ (SPR)
//
// iIndex = �������
// iCheck = �Ƿ��ȡhud.txt�е�SPR(1Ϊhud�е�SPR)����֮��SPR�ļ�
// iCenter = �Ƿ�ͼƬ����
// szSprite = ͼƬ�ļ���
// x = �������� (0.5 Ϊ��Ļ����λ��)
// y = �������� (0.5 Ϊ��Ļ����λ��)
// r = ͼƬ��Ϣ�ĺ�ɫֵ
// g = ͼƬ��Ϣ����ɫֵ
// b = ͼƬ��Ϣ����ɫֵ
// iMode = ͼƬ��Ϣ��ʾģʽ [0 - ���� // 1 - ���� // 2 - ���� // 3 - ���뵭��]
// flTime = ͼƬ��Ϣ����ʾʱ��
// iChanne = ͼƬ��Ϣ��ͨ��ֵ (С�� 0 ���ߴ��� 63 Ϊ���)
// iLength = ͼƬ��ʾ�ĳ���(Ϊ����ֻ֧��hud�е�SPR��������ͨ��������㣬�ʺ��ù�����̬Ѫ����)
//
native MH_DrawImage(iIndex, iCheck = 1, iCenter = 1, const szSprite[], Float:x = 0.5, Float:y = 0.5, r = 255, g = 255, b = 255, iMode = 0, Float:flDisplayTime = 1.0, iChanne = 0, iLength)

// ��ʾ�����һ�� Additive ģʽͼƬ (SPR)
//
// iIndex = �������
// iCheck = �Ƿ��ȡhud.txt�е�SPR(1Ϊhud�е�SPR)����֮��SPR�ļ�
// iCenter = �Ƿ�ͼƬ����
// szSprite = ͼƬ�ļ���
// x = �������� (0.5 Ϊ��Ļ����λ��)
// y = �������� (0.5 Ϊ��Ļ����λ��)
// r = ͼƬ��Ϣ�ĺ�ɫֵ
// g = ͼƬ��Ϣ����ɫֵ
// b = ͼƬ��Ϣ����ɫֵ
// iMode = ͼƬ��Ϣ��ʾģʽ [0 - ���� // 1 - ���� // 2 - ���� // 3 - ���뵭��]
// flTime = ͼƬ��Ϣ����ʾʱ��
// iChanne = ͼƬ��Ϣ��ͨ��ֵ (С�� 0 ���ߴ��� 63 Ϊ���)
//
native MH_DrawAdditiveImage(iIndex, iCheck = 1, iCenter = 1, const szSprite[], Float:x = 0.5, Float:y = 0.5, r = 255, g = 255, b = 255, iMode = 0, Float:flDisplayTime = 1.0, iChanne = 0, iLength)

// ��ʾ�����һ�� Holes ģʽͼƬ (SPR)
//
// iIndex = �������
// iCheck = �Ƿ��ȡhud.txt�е�SPR(1Ϊhud�е�SPR)����֮��SPR�ļ�
// iCenter = �Ƿ�ͼƬ����
// szSprite = ͼƬ�ļ���
// x = �������� (0.5 Ϊ��Ļ����λ��)
// y = �������� (0.5 Ϊ��Ļ����λ��)
// r = ͼƬ��Ϣ�ĺ�ɫֵ
// g = ͼƬ��Ϣ����ɫֵ
// b = ͼƬ��Ϣ����ɫֵ
// iMode = ͼƬ��Ϣ��ʾģʽ [0 - ���� // 1 - ���� // 2 - ���� // 3 - ���뵭��]
// flTime = ͼƬ��Ϣ����ʾʱ��
// iChanne = ͼƬ��Ϣ��ͨ��ֵ (С�� 0 ���ߴ��� 63 Ϊ���)
// iLength = ͼƬ��ʾ�ĳ���(Ϊ����ֻ֧��hud�е�SPR��������ͨ��������㣬�ʺ��ù�����̬Ѫ����)
//
native MH_DrawHolesImage(iIndex, iCheck = 1, iCenter = 1, const szSprite[], Float:x = 0.5, Float:y = 0.5, r = 255, g = 255, b = 255, iMode = 0, Float:flDisplayTime = 1.0, iChanne = 0, iLength)

// ��ʾ�����һ������
//
// iIndex = �������
// iCenter = �Ƿ����־���
// szText = ��Ҫ��ʾ������
// x = �������� (0.5 Ϊ��Ļ����λ��)
// y = �������� (0.5 Ϊ��Ļ����λ��)
// r = ������Ϣ�ĺ�ɫֵ
// g = ������Ϣ����ɫֵ
// b = ������Ϣ����ɫֵ
// flTime = ������Ϣ����ʾʱ��
// iChanne = ������Ϣ��ͨ��ֵ (С�� 0 ���ߴ��� 63 Ϊ���)
// iLength = ͼƬ��ʾ�ĳ���(Ϊ����ֻ֧��hud�е�SPR��������ͨ��������㣬�ʺ��ù�����̬Ѫ����)
//
native MH_DrawText(iIndex, iCenter = 1, const szText[], Float:x = 0.5, Float:y = 0.5, r = 255, g = 255, b = 255, Float:flDisplayTime = 1.0, iChanne = 0)

// ��������ӽ�ģ�͵����岿λ
//
// iIndex = �������
// iBody = ���岿λ (-1 �����κθı�)
//
native MH_SetViewEntityBody(iIndex, iBody = -1)

// ��������ӽ�ģ�͵���Ⱦ����
// ��Ⱦ���Բ�������� "amxconst.inc".
//
// iIndex = �������
// iMode = ��Ⱦģʽ (-1 �����κθı�)
// iEffect = ��Ⱦ��Ч
// iColorR = ��Ⱦ��ɫֵ
// iColorG = ��Ⱦ��ɫֵ
// iColorB = ��Ⱦ��ɫֵ
// iAmout = ��Ⱦֵ
//
native MH_SetViewEntityRender(iIndex, iMode = -1, iEffect, iColorR, iColorG, iColorB, iAmout)

// ������ṩһ���Ƿ���
// 
// iIndex = �������
// szScoreBoardName = �Ƿ���SPR
// iTopLeftNum = �Ƿ����������� (SHORT֧�ִ���10000)
// iTopCenterNum = �Ƿ����м����� (BYTE ���255)
// iTopRightNum = �Ƿ����������� (SHORT)
// iDownLeftNum = �Ƿ����������� (SHORT)
// iDownRightNum = �Ƿ����������� (SHORT)
// iMode = �����ڼ�¼ģʽ (SHORT)
// ��iDownLeftNum ���� -1 ʱ���ɹر��·���������ʾ�����������ŶӸ���ģʽ��
// ��iMode = -1 ʱ���ԹرռǷ��� :D �Ƿ��Ƴ�ʼ��ʱiModeĬ��Ϊ -1(1Ϊ���� ������ʽ 2 Ϊ���ֱ���ʽ 3 Ϊ �ŶӸ�����ʽ)
//
native MH_DrawScoreBoard(iIndex,iTopLeftNum, iTopCenterNum, iTopRightNum, iDownLeftNum, iDownRightNum ,iMode)
/* AMXX-Studio Notes - DO NOT MODIFY BELOW HERE
*{\\ rtf1\\ ansi\\ deff0{\\ fonttbl{\\ f0\\ fnil Tahoma;}}\n\\ viewkind4\\ uc1\\ pard\\ lang1033\\ f0\\ fs16 \n\\ par }
*/