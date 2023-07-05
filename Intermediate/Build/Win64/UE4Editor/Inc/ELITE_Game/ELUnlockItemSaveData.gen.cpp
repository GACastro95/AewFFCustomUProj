// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELUnlockItemSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELUnlockItemSaveData() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FELUnlockItemSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELUnlockItemSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELUnlockItemSaveData, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELUnlockItemSaveData"), sizeof(FELUnlockItemSaveData), Get_Z_Construct_UScriptStruct_FELUnlockItemSaveData_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELUnlockItemSaveData>()
{
	return FELUnlockItemSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELUnlockItemSaveData(FELUnlockItemSaveData::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELUnlockItemSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELUnlockItemSaveData
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELUnlockItemSaveData()
	{
		UScriptStruct::DeferCppStructOps<FELUnlockItemSaveData>(FName(TEXT("ELUnlockItemSaveData")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELUnlockItemSaveData;
	struct Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNew_MetaData[];
#endif
		static void NewProp_IsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Purchased_MetaData[];
#endif
		static void NewProp_Purchased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Purchased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFavorite_MetaData[];
#endif
		static void NewProp_IsFavorite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFavorite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stocked_MetaData[];
#endif
		static void NewProp_Stocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StockedTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StockedTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNewlyAvailable_MetaData[];
#endif
		static void NewProp_IsNewlyAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNewlyAvailable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELUnlockItemSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockItemSaveData" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELUnlockItemSaveData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockItemSaveData" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELUnlockItemSaveData, Category), Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNew_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockItemSaveData" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNew_SetBit(void* Obj)
	{
		((FELUnlockItemSaveData*)Obj)->IsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNew = { "IsNew", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELUnlockItemSaveData), &Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Purchased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockItemSaveData" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Purchased_SetBit(void* Obj)
	{
		((FELUnlockItemSaveData*)Obj)->Purchased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Purchased = { "Purchased", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELUnlockItemSaveData), &Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Purchased_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Purchased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Purchased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsFavorite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockItemSaveData" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsFavorite_SetBit(void* Obj)
	{
		((FELUnlockItemSaveData*)Obj)->IsFavorite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsFavorite = { "IsFavorite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELUnlockItemSaveData), &Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsFavorite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsFavorite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsFavorite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Stocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockItemSaveData" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Stocked_SetBit(void* Obj)
	{
		((FELUnlockItemSaveData*)Obj)->Stocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Stocked = { "Stocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELUnlockItemSaveData), &Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Stocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Stocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Stocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_StockedTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockItemSaveData" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_StockedTimeStamp = { "StockedTimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELUnlockItemSaveData, StockedTimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_StockedTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_StockedTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNewlyAvailable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockItemSaveData" },
		{ "ModuleRelativePath", "Public/ELUnlockItemSaveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNewlyAvailable_SetBit(void* Obj)
	{
		((FELUnlockItemSaveData*)Obj)->IsNewlyAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNewlyAvailable = { "IsNewlyAvailable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELUnlockItemSaveData), &Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNewlyAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNewlyAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNewlyAvailable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Purchased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsFavorite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_Stocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_StockedTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::NewProp_IsNewlyAvailable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELUnlockItemSaveData",
		sizeof(FELUnlockItemSaveData),
		alignof(FELUnlockItemSaveData),
		Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELUnlockItemSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELUnlockItemSaveData"), sizeof(FELUnlockItemSaveData), Get_Z_Construct_UScriptStruct_FELUnlockItemSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELUnlockItemSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELUnlockItemSaveData_Hash() { return 933829150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
