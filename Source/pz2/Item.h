// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS()
class PZ2_API UItem : public UObject
{
	GENERATED_BODY()

public:
	UItem();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float Price;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FString Category;

	static UItem* MAKE(int32 Id, FString Name, float Price, FString Category);

protected:
	void Init(int32 Id, FString Name, float Price, FString Category);
	
};
