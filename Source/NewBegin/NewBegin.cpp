// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewBegin.h"
#include "Modules/ModuleManager.h"

void FNewBeModule::StartupModule()
{
	//��ʼ����ʽ
	/*FSlateStyleRegistry::UnRegisterSlateStyle();*/
	
}

void FNewBeModule::ShutdownModule()
{
	
}

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, NewBegin, "NewBegin" );
