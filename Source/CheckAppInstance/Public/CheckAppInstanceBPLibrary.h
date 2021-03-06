// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "HAL/FileManager.h"
#include "Runtime/ApplicationCore/Public/Windows/WindowsPlatformApplicationMisc.h"
#include "GeneralProjectSettings.h"
#include "CheckAppInstanceBPLibrary.generated.h"

UCLASS()
class UCheckAppInstanceBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "CheckAppInstance")
	static void CheckAnotherAppInstance(bool IsEnabled = true);
};
