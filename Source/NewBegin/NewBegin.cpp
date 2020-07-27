// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewBegin.h"
#include "Modules/ModuleManager.h"

void FNewBeModule::StartupModule()
{
	//初始化样式
	/*FSlateStyleRegistry::UnRegisterSlateStyle();*/
	
}

void FNewBeModule::ShutdownModule()
{
	
}

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, NewBegin, "NewBegin" );
