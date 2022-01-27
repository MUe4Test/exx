// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreGameInstance.h"
#include "../Frame/FrameControllerBase.h"
#include "../GameConfig/FrameConfig/FrameConfig.h"
UCoreGameInstance* UCoreGameInstance::coreGameInstance = nullptr;


void UCoreGameInstance::createControllers()
{
	const UFrameConfig* framConfig = GetDefault<UFrameConfig>();
	for (auto frameControllerClass: framConfig->FrameController)
	{
		UFrameControllerBase* FrameControllerBase = NewObject<UFrameControllerBase>(this, frameControllerClass.Value);
		FrameControllers.Add(frameControllerClass.Key, FrameControllerBase);
	}
}

void UCoreGameInstance::initControllers()
{
	for (auto frameControllerBase : FrameControllers)
	{
		frameControllerBase.Value->initData();
	}
}

void UCoreGameInstance::Init()
{
	coreGameInstance = this;
	createControllers();
	initControllers();

}

UCoreGameInstance* UCoreGameInstance::get()
{
	return coreGameInstance;
}

UFrameControllerBase* UCoreGameInstance::getController(FName controllersName)
{
	UFrameControllerBase* frameControllerBase = *FrameControllers.Find(controllersName);
	ensureAlwaysMsgf(frameControllerBase != nullptr, TEXT("控制器为空，需要自行配置！"));
	return frameControllerBase;
}
