// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOnlineDebugMenuParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOnlineDebugMenuParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FELSSOnlineDebugMenuParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELSSOnlineDebugMenuParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELSSOnlineDebugMenuParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSOnlineDebugMenuParam"), sizeof(FELSSOnlineDebugMenuParam), Get_Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSOnlineDebugMenuParam>()
{
	return FELSSOnlineDebugMenuParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSOnlineDebugMenuParam(FELSSOnlineDebugMenuParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSOnlineDebugMenuParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSOnlineDebugMenuParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSOnlineDebugMenuParam()
	{
		UScriptStruct::DeferCppStructOps<FELSSOnlineDebugMenuParam>(FName(TEXT("ELSSOnlineDebugMenuParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSOnlineDebugMenuParam;
	struct Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerWrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerWrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWrestlerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinWrestlerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSOnlineDebugMenuParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSOnlineDebugMenuParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSOnlineDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID = { "PlayerWrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSOnlineDebugMenuParam, PlayerWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSOnlineDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_WrestlerNum = { "WrestlerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSOnlineDebugMenuParam, WrestlerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSOnlineDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum = { "MinWrestlerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSOnlineDebugMenuParam, MinWrestlerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_WrestlerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELSSOnlineDebugMenuParam",
		sizeof(FELSSOnlineDebugMenuParam),
		alignof(FELSSOnlineDebugMenuParam),
		Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSOnlineDebugMenuParam"), sizeof(FELSSOnlineDebugMenuParam), Get_Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSOnlineDebugMenuParam_Hash() { return 2725039760U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
