// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/CreateTeamMenuParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateTeamMenuParam() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTeamMenuParam();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCatMenuMode();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTeamParam();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCatLoadOutMenuType();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCatSettingListItemType();
// End Cross Module References

static_assert(std::is_polymorphic<FCreateTeamMenuParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCreateTeamMenuParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCreateTeamMenuParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FCreateTeamMenuParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateTeamMenuParam, Z_Construct_UPackage__Script_ELITE(), TEXT("CreateTeamMenuParam"), sizeof(FCreateTeamMenuParam), Get_Z_Construct_UScriptStruct_FCreateTeamMenuParam_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FCreateTeamMenuParam>()
{
	return FCreateTeamMenuParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCreateTeamMenuParam(FCreateTeamMenuParam::StaticStruct, TEXT("/Script/ELITE"), TEXT("CreateTeamMenuParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFCreateTeamMenuParam
{
	FScriptStruct_ELITE_StaticRegisterNativesFCreateTeamMenuParam()
	{
		UScriptStruct::DeferCppStructOps<FCreateTeamMenuParam>(FName(TEXT("CreateTeamMenuParam")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFCreateTeamMenuParam;
	struct Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MenuMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MenuMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadOutMenuType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadOutMenuType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadOutMenuType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SettingMenuType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingMenuType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SettingMenuType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CreateTeamMenuParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateTeamMenuParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_MenuMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_MenuMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateTeamMenuParam" },
		{ "ModuleRelativePath", "Public/CreateTeamMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_MenuMode = { "MenuMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateTeamMenuParam, MenuMode), Z_Construct_UEnum_ELITE_EnCatMenuMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_MenuMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_MenuMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_CurrentTeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateTeamMenuParam" },
		{ "ModuleRelativePath", "Public/CreateTeamMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_CurrentTeam = { "CurrentTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateTeamMenuParam, CurrentTeam), Z_Construct_UScriptStruct_FCreateTeamParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_CurrentTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_CurrentTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_EditSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateTeamMenuParam" },
		{ "ModuleRelativePath", "Public/CreateTeamMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_EditSlot = { "EditSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateTeamMenuParam, EditSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_EditSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_EditSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_LoadOutMenuType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_LoadOutMenuType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateTeamMenuParam" },
		{ "ModuleRelativePath", "Public/CreateTeamMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_LoadOutMenuType = { "LoadOutMenuType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateTeamMenuParam, LoadOutMenuType), Z_Construct_UEnum_ELITE_EnCatLoadOutMenuType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_LoadOutMenuType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_LoadOutMenuType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_SettingMenuType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_SettingMenuType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateTeamMenuParam" },
		{ "ModuleRelativePath", "Public/CreateTeamMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_SettingMenuType = { "SettingMenuType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateTeamMenuParam, SettingMenuType), Z_Construct_UEnum_ELITE_EnCatSettingListItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_SettingMenuType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_SettingMenuType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_MenuMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_MenuMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_CurrentTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_EditSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_LoadOutMenuType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_LoadOutMenuType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_SettingMenuType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::NewProp_SettingMenuType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CreateTeamMenuParam",
		sizeof(FCreateTeamMenuParam),
		alignof(FCreateTeamMenuParam),
		Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateTeamMenuParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCreateTeamMenuParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CreateTeamMenuParam"), sizeof(FCreateTeamMenuParam), Get_Z_Construct_UScriptStruct_FCreateTeamMenuParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCreateTeamMenuParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCreateTeamMenuParam_Hash() { return 2812341143U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
