#pragma once

//if there is something missing or if you want to add or correct something make an issue

//I could put the offsets for the glow but I'm not sure how to update them

#define OFFSET_ENTITYLIST		    0x19224d8 //cl_entitylist
#define OFFSET_LOCAL_ENT			0x1cd1d58 //LocalPlayer

#define OFFSET_NAME_INDEX			0x38
#define OFFSET_TEAM					0x0448 //m_iTeamNum
#define OFFSET_HEALTH				0x0438 //m_iHealth
#define OFFSET_SHIELD				0x0170 //m_shieldHealth
#define OFFSET_NAME					0x0589 //m_iName
#define OFFSET_VISIBLE_TIME         0x1ACC //ida LastVisibleTime + x + F5 + reset pointer

#define OFFSET_NAMELIST				0x84056a0 //NameList

#define OFFSET_LIFE_STATE			0x0798 //m_lifeState, >0 = dead
#define OFFSET_BLEED_OUT_STATE		0x26d8 //m_bleedoutState, >0 = knocked

#define OFFSET_BULLET_SPEED			0x1ED0 //idk
#define OFFSET_BULLET_GRAVITY		0x1ED8 //idk

#define OFFSET_CURRENT_WEAPON		0x1A6C //m_latestPrimaryWeapons
#define OFFSET_ORIGIN				0x14C //m_vecAbsOrigin
#define OFFSET_BONES				0xF38 //m_bConstrainBetweenEndpoints
#define OFFSET_AIMPUNCH				0x2440 //m_vecPunchWeapon_Angle
#define OFFSET_CAMERAPOS			0x1ED0 //CameraPosition and lea rax, aCameraposition ; "CameraPosition" mov [rbx+8], rax // lea rax, sub_7FF65FB916F0 and something like that dword_7FF66A8DE590 = *(_DWORD *)(a1 + 0x1ED0); //it was for an old update it's just a kind of memo //maybe wrong
#define OFFSET_VIEWANGLES			0x253c //m_ammoPoolCapacity / x / first .data/ dword - 14 //maybe wrong
#define OFFSET_BREATH_ANGLES		(OFFSET_VIEWANGLES - 0x10)

#define OFFSET_MATRIX				0x1B3BD0
#define OFFSET_RENDER				0x41f4d98
