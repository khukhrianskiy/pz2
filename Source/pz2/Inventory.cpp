// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory.h"

UInventory::UInventory()
{
	ItemList.Add(UItem::MAKE(1, "CV-47", 5.000, "Gun"));
	ItemList.Add(UItem::MAKE(1, "M4A1", 8.000, "Gun"));
	ItemList.Add(UItem::MAKE(1, "Schmidt Scout", 5.000, "Sniper Rifles"));
}


