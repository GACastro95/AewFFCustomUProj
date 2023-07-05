// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DebugCareerParam_Setting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCareerParam_Setting() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_Setting();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELanguageType();
// End Cross Module References
class UScriptStruct* FDebugCareerParam_Setting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCareerParam_Setting, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DebugCareerParam_Setting"), sizeof(FDebugCareerParam_Setting), Get_Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDebugCareerParam_Setting>()
{
	return FDebugCareerParam_Setting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCareerParam_Setting(FDebugCareerParam_Setting::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DebugCareerParam_Setting"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Setting
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Setting()
	{
		UScriptStruct::DeferCppStructOps<FDebugCareerParam_Setting>(FName(TEXT("DebugCareerParam_Setting")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Setting;
	struct Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_eLanguageType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_eLanguageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_eLanguageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_eRequestLanguageType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_eRequestLanguageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_eRequestLanguageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bLanguageChangeFlag_MetaData[];
#endif
		static void NewProp_m_bLanguageChangeFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bLanguageChangeFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Setting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCareerParam_Setting>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eLanguageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eLanguageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_Setting" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Setting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eLanguageType = { "m_eLanguageType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_Setting, m_eLanguageType), Z_Construct_UEnum_ABP_200508_ELanguageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eLanguageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eLanguageType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eRequestLanguageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eRequestLanguageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_Setting" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Setting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eRequestLanguageType = { "m_eRequestLanguageType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_Setting, m_eRequestLanguageType), Z_Construct_UEnum_ABP_200508_ELanguageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eRequestLanguageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eRequestLanguageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_bLanguageChangeFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_Setting" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Setting.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_bLanguageChangeFlag_SetBit(void* Obj)
	{
		((FDebugCareerParam_Setting*)Obj)->m_bLanguageChangeFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_bLanguageChangeFlag = { "m_bLanguageChangeFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_Setting), &Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_bLanguageChangeFlag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_bLanguageChangeFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_bLanguageChangeFlag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eLanguageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eLanguageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eRequestLanguageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_eRequestLanguageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::NewProp_m_bLanguageChangeFlag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DebugCareerParam_Setting",
		sizeof(FDebugCareerParam_Setting),
		alignof(FDebugCareerParam_Setting),
		Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_Setting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCareerParam_Setting"), sizeof(FDebugCareerParam_Setting), Get_Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Setting_Hash() { return 3828276215U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
