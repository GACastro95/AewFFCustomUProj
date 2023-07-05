// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHeatSkillSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHeatSkillSetting() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillSetting();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSHeatSkillSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHeatSkillSetting, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHeatSkillSetting"), sizeof(FSSHeatSkillSetting), Get_Z_Construct_UScriptStruct_FSSHeatSkillSetting_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHeatSkillSetting>()
{
	return FSSHeatSkillSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHeatSkillSetting(FSSHeatSkillSetting::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHeatSkillSetting"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillSetting
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillSetting()
	{
		UScriptStruct::DeferCppStructOps<FSSHeatSkillSetting>(FName(TEXT("SSHeatSkillSetting")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillSetting;
	struct Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Strike_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Strike;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Grapple_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grapple;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighFly_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HighFly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Weapon_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHeatSkillSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHeatSkillSetting>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Strike_Inner = { "Strike", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Strike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillSetting" },
		{ "ModuleRelativePath", "Public/SSHeatSkillSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Strike = { "Strike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillSetting, Strike), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Strike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Strike_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Grapple_Inner = { "Grapple", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillSetting" },
		{ "ModuleRelativePath", "Public/SSHeatSkillSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillSetting, Grapple), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Grapple_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_HighFly_Inner = { "HighFly", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_HighFly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillSetting" },
		{ "ModuleRelativePath", "Public/SSHeatSkillSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_HighFly = { "HighFly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillSetting, HighFly), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_HighFly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_HighFly_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Weapon_Inner = { "Weapon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillSetting" },
		{ "ModuleRelativePath", "Public/SSHeatSkillSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillSetting, Weapon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Strike_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Strike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Grapple_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_HighFly_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_HighFly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Weapon_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::NewProp_Weapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSHeatSkillSetting",
		sizeof(FSSHeatSkillSetting),
		alignof(FSSHeatSkillSetting),
		Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHeatSkillSetting"), sizeof(FSSHeatSkillSetting), Get_Z_Construct_UScriptStruct_FSSHeatSkillSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHeatSkillSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillSetting_Hash() { return 1036167476U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
