// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class PZ2_API UInventory : public UObject
{
	GENERATED_BODY()

public:
	UInventory();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TArray<UItem*> ItemList;
	
};
