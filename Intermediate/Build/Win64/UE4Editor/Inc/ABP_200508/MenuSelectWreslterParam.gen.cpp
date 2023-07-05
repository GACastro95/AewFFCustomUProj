// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MenuSelectWreslterParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuSelectWreslterParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMenuSelectWreslterParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FMenuSelectWreslterParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMenuSelectWreslterParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMenuSelectWreslterParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMenuSelectWreslterParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MenuSelectWreslterParam"), sizeof(FMenuSelectWreslterParam), Get_Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMenuSelectWreslterParam>()
{
	return FMenuSelectWreslterParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMenuSelectWreslterParam(FMenuSelectWreslterParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MenuSelectWreslterParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMenuSelectWreslterParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMenuSelectWreslterParam()
	{
		UScriptStruct::DeferCppStructOps<FMenuSelectWreslterParam>(FName(TEXT("MenuSelectWreslterParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMenuSelectWreslterParam;
	struct Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidWrestler_MetaData[];
#endif
		static void NewProp_ValidWrestler_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidWrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedWrestler_MetaData[];
#endif
		static void NewProp_LockedWrestler_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockedWrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockableItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockableItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MenuSelectWreslterParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMenuSelectWreslterParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuSelectWreslterParam" },
		{ "ModuleRelativePath", "Public/MenuSelectWreslterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuSelectWreslterParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_ValidWrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuSelectWreslterParam" },
		{ "ModuleRelativePath", "Public/MenuSelectWreslterParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_ValidWrestler_SetBit(void* Obj)
	{
		((FMenuSelectWreslterParam*)Obj)->ValidWrestler = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_ValidWrestler = { "ValidWrestler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMenuSelectWreslterParam), &Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_ValidWrestler_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_ValidWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_ValidWrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_LockedWrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuSelectWreslterParam" },
		{ "ModuleRelativePath", "Public/MenuSelectWreslterParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_LockedWrestler_SetBit(void* Obj)
	{
		((FMenuSelectWreslterParam*)Obj)->LockedWrestler = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_LockedWrestler = { "LockedWrestler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMenuSelectWreslterParam), &Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_LockedWrestler_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_LockedWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_LockedWrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_UnlockableItemID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuSelectWreslterParam" },
		{ "ModuleRelativePath", "Public/MenuSelectWreslterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_UnlockableItemID = { "UnlockableItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuSelectWreslterParam, UnlockableItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_UnlockableItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_UnlockableItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_ValidWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_LockedWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::NewProp_UnlockableItemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MenuSelectWreslterParam",
		sizeof(FMenuSelectWreslterParam),
		alignof(FMenuSelectWreslterParam),
		Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMenuSelectWreslterParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MenuSelectWreslterParam"), sizeof(FMenuSelectWreslterParam), Get_Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMenuSelectWreslterParam_Hash() { return 2624025991U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
