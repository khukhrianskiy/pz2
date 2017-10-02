// Fill out your copyright notice in the Description page of Project Settings.

#include "Item.h"

UItem::UItem() :Id(0), Name("DefaultItem"), Price(0), Category("DefaultCategory")
{

}

UItem* UItem::MAKE(int32 Id, FString Name, float Price, FString Category)
{
	UItem* NewUItem = NewObject<UItem>();
	NewUItem->Init(Id, Name, Price, Category);
	return NewUItem;
}

void UItem::Init(int32 IdParam, FString NameParam, float PriceParam, FString CategoryParam)
{
	Id = IdParam;
	Name = NameParam;
	Price = PriceParam;
	Category = CategoryParam;
}

