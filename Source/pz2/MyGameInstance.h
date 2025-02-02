// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyUserProfile.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PZ2_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMyUserProfile* UserProfile;
	
	virtual void Init() override;
	
};
