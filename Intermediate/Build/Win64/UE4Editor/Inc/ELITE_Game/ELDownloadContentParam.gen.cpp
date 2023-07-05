// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELDownloadContentParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDownloadContentParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELDownloadContentParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELDownloadContentParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELDownloadContentParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELDownloadContentParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELDownloadContentParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELDownloadContentParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELDownloadContentParam"), sizeof(FELDownloadContentParam), Get_Z_Construct_UScriptStruct_FELDownloadContentParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELDownloadContentParam>()
{
	return FELDownloadContentParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELDownloadContentParam(FELDownloadContentParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELDownloadContentParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELDownloadContentParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELDownloadContentParam()
	{
		UScriptStruct::DeferCppStructOps<FELDownloadContentParam>(FName(TEXT("ELDownloadContentParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELDownloadContentParam;
	struct Z_Construct_UScriptStruct_FELDownloadContentParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedPatchVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NeedPatchVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementLabel_PS4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementLabel_PS4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementLabel_PS5_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementLabel_PS5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentsIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentsIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLC_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLC_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreID_XOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StoreID_XOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreID_XSX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StoreID_XSX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELDownloadContentParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDownloadContentParam" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDownloadContentParam, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_NeedPatchVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDownloadContentParam" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_NeedPatchVersion = { "NeedPatchVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDownloadContentParam, NeedPatchVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_NeedPatchVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_NeedPatchVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDownloadContentParam" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS4 = { "EntitlementLabel_PS4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDownloadContentParam, EntitlementLabel_PS4), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS5_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDownloadContentParam" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS5 = { "EntitlementLabel_PS5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDownloadContentParam, EntitlementLabel_PS5), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_ContentsIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDownloadContentParam" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_ContentsIndex = { "ContentsIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDownloadContentParam, ContentsIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_ContentsIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_ContentsIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DLC_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDownloadContentParam" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DLC_AppID = { "DLC_AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDownloadContentParam, DLC_AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DLC_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DLC_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XOne_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDownloadContentParam" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XOne = { "StoreID_XOne", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDownloadContentParam, StoreID_XOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XSX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDownloadContentParam" },
		{ "ModuleRelativePath", "Public/ELDownloadContentParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XSX = { "StoreID_XSX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDownloadContentParam, StoreID_XSX), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XSX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XSX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_NeedPatchVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_EntitlementLabel_PS5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_ContentsIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_DLC_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::NewProp_StoreID_XSX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELDownloadContentParam",
		sizeof(FELDownloadContentParam),
		alignof(FELDownloadContentParam),
		Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELDownloadContentParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELDownloadContentParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELDownloadContentParam"), sizeof(FELDownloadContentParam), Get_Z_Construct_UScriptStruct_FELDownloadContentParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELDownloadContentParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELDownloadContentParam_Hash() { return 2031169752U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
