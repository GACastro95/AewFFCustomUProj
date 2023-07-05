// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSSModeOnlineDebugMenuParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSSModeOnlineDebugMenuParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FELSSSSModeOnlineDebugMenuParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELSSSSModeOnlineDebugMenuParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELSSSSModeOnlineDebugMenuParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSSSModeOnlineDebugMenuParam"), sizeof(FELSSSSModeOnlineDebugMenuParam), Get_Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSSSModeOnlineDebugMenuParam>()
{
	return FELSSSSModeOnlineDebugMenuParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam(FELSSSSModeOnlineDebugMenuParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSSSModeOnlineDebugMenuParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSSSModeOnlineDebugMenuParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSSSModeOnlineDebugMenuParam()
	{
		UScriptStruct::DeferCppStructOps<FELSSSSModeOnlineDebugMenuParam>(FName(TEXT("ELSSSSModeOnlineDebugMenuParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSSSModeOnlineDebugMenuParam;
	struct Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSSSModeOnlineDebugMenuParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSSSModeOnlineDebugMenuParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSSModeOnlineDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSSSModeOnlineDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID = { "PlayerWrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSSSModeOnlineDebugMenuParam, PlayerWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSSModeOnlineDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSSSModeOnlineDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_WrestlerNum = { "WrestlerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSSSModeOnlineDebugMenuParam, WrestlerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSSModeOnlineDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSSSModeOnlineDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum = { "MinWrestlerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSSSModeOnlineDebugMenuParam, MinWrestlerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_PlayerWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_WrestlerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::NewProp_MinWrestlerNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELSSSSModeOnlineDebugMenuParam",
		sizeof(FELSSSSModeOnlineDebugMenuParam),
		alignof(FELSSSSModeOnlineDebugMenuParam),
		Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSSSModeOnlineDebugMenuParam"), sizeof(FELSSSSModeOnlineDebugMenuParam), Get_Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSSSModeOnlineDebugMenuParam_Hash() { return 588486532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
