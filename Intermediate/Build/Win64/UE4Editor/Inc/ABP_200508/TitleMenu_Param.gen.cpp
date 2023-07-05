// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TitleMenu_Param.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleMenu_Param() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTitleMenu_Param();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ETitleMenu_QuickSettingsCommand();
// End Cross Module References

static_assert(std::is_polymorphic<FTitleMenu_Param>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTitleMenu_Param cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FTitleMenu_Param::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTitleMenu_Param_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTitleMenu_Param, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TitleMenu_Param"), sizeof(FTitleMenu_Param), Get_Z_Construct_UScriptStruct_FTitleMenu_Param_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTitleMenu_Param>()
{
	return FTitleMenu_Param::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTitleMenu_Param(FTitleMenu_Param::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TitleMenu_Param"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTitleMenu_Param
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTitleMenu_Param()
	{
		UScriptStruct::DeferCppStructOps<FTitleMenu_Param>(FName(TEXT("TitleMenu_Param")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTitleMenu_Param;
	struct Z_Construct_UScriptStruct_FTitleMenu_Param_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Disp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallBack_FancName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CallBack_FancName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TitleMenu_Param.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTitleMenu_Param>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_eType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_eType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TitleMenu_Param" },
		{ "ModuleRelativePath", "Public/TitleMenu_Param.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_eType = { "eType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTitleMenu_Param, eType), Z_Construct_UEnum_ABP_200508_ETitleMenu_QuickSettingsCommand, METADATA_PARAMS(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_eType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_eType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_Disp_String_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TitleMenu_Param" },
		{ "ModuleRelativePath", "Public/TitleMenu_Param.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_Disp_String = { "Disp_String", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTitleMenu_Param, Disp_String), METADATA_PARAMS(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_Disp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_Disp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_CallBack_FancName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TitleMenu_Param" },
		{ "ModuleRelativePath", "Public/TitleMenu_Param.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_CallBack_FancName = { "CallBack_FancName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTitleMenu_Param, CallBack_FancName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_CallBack_FancName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_CallBack_FancName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_eType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_eType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_Disp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::NewProp_CallBack_FancName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TitleMenu_Param",
		sizeof(FTitleMenu_Param),
		alignof(FTitleMenu_Param),
		Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTitleMenu_Param()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTitleMenu_Param_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TitleMenu_Param"), sizeof(FTitleMenu_Param), Get_Z_Construct_UScriptStruct_FTitleMenu_Param_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTitleMenu_Param_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTitleMenu_Param_Hash() { return 2137857573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
