// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHeatSkillDefaultSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHeatSkillDefaultSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSHeatSkillDefaultSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSHeatSkillDefaultSettings cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSHeatSkillDefaultSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHeatSkillDefaultSettings"), sizeof(FSSHeatSkillDefaultSettings), Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHeatSkillDefaultSettings>()
{
	return FSSHeatSkillDefaultSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHeatSkillDefaultSettings(FSSHeatSkillDefaultSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHeatSkillDefaultSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillDefaultSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillDefaultSettings()
	{
		UScriptStruct::DeferCppStructOps<FSSHeatSkillDefaultSettings>(FName(TEXT("SSHeatSkillDefaultSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillDefaultSettings;
	struct Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Row;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike00_MetaData[];
#endif
		static void NewProp_Strike00_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike00;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike01_MetaData[];
#endif
		static void NewProp_Strike01_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike02_MetaData[];
#endif
		static void NewProp_Strike02_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike03_MetaData[];
#endif
		static void NewProp_Strike03_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike04_MetaData[];
#endif
		static void NewProp_Strike04_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike04;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike05_MetaData[];
#endif
		static void NewProp_Strike05_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike05;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike06_MetaData[];
#endif
		static void NewProp_Strike06_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike06;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike07_MetaData[];
#endif
		static void NewProp_Strike07_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike07;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike08_MetaData[];
#endif
		static void NewProp_Strike08_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike08;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strike09_MetaData[];
#endif
		static void NewProp_Strike09_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strike09;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple00_MetaData[];
#endif
		static void NewProp_Grapple00_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple00;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple01_MetaData[];
#endif
		static void NewProp_Grapple01_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple02_MetaData[];
#endif
		static void NewProp_Grapple02_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple03_MetaData[];
#endif
		static void NewProp_Grapple03_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple04_MetaData[];
#endif
		static void NewProp_Grapple04_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple04;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple05_MetaData[];
#endif
		static void NewProp_Grapple05_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple05;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple06_MetaData[];
#endif
		static void NewProp_Grapple06_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple06;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple07_MetaData[];
#endif
		static void NewProp_Grapple07_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple07;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple08_MetaData[];
#endif
		static void NewProp_Grapple08_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple08;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple09_MetaData[];
#endif
		static void NewProp_Grapple09_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple09;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly00_MetaData[];
#endif
		static void NewProp_HighFly00_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly00;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly01_MetaData[];
#endif
		static void NewProp_HighFly01_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly02_MetaData[];
#endif
		static void NewProp_HighFly02_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly03_MetaData[];
#endif
		static void NewProp_HighFly03_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly04_MetaData[];
#endif
		static void NewProp_HighFly04_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly04;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly05_MetaData[];
#endif
		static void NewProp_HighFly05_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly05;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly06_MetaData[];
#endif
		static void NewProp_HighFly06_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly06;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly07_MetaData[];
#endif
		static void NewProp_HighFly07_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly07;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly08_MetaData[];
#endif
		static void NewProp_HighFly08_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly08;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFly09_MetaData[];
#endif
		static void NewProp_HighFly09_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HighFly09;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon00_MetaData[];
#endif
		static void NewProp_Weapon00_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon00;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon01_MetaData[];
#endif
		static void NewProp_Weapon01_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon02_MetaData[];
#endif
		static void NewProp_Weapon02_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon03_MetaData[];
#endif
		static void NewProp_Weapon03_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon04_MetaData[];
#endif
		static void NewProp_Weapon04_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon04;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon05_MetaData[];
#endif
		static void NewProp_Weapon05_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon05;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon06_MetaData[];
#endif
		static void NewProp_Weapon06_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon06;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon07_MetaData[];
#endif
		static void NewProp_Weapon07_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon07;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon08_MetaData[];
#endif
		static void NewProp_Weapon08_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon08;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon09_MetaData[];
#endif
		static void NewProp_Weapon09_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Weapon09;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHeatSkillDefaultSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettings, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Row_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettings, Row), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike00_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike00_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike00 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike00 = { "Strike00", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike00_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike00_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike00_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike01_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike01 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike01 = { "Strike01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike01_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike02_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike02 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike02 = { "Strike02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike02_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike03_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike03_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike03 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike03 = { "Strike03", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike03_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike03_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike04_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike04_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike04 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike04 = { "Strike04", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike04_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike04_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike04_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike05_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike05_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike05 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike05 = { "Strike05", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike05_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike05_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike05_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike06_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike06_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike06 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike06 = { "Strike06", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike06_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike06_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike06_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike07_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike07_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike07 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike07 = { "Strike07", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike07_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike07_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike07_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike08_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike08_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike08 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike08 = { "Strike08", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike08_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike08_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike08_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike09_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike09_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Strike09 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike09 = { "Strike09", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike09_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike09_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike09_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple00_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple00_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple00 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple00 = { "Grapple00", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple00_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple00_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple00_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple01_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple01 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple01 = { "Grapple01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple01_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple02_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple02 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple02 = { "Grapple02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple02_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple03_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple03_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple03 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple03 = { "Grapple03", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple03_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple03_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple04_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple04_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple04 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple04 = { "Grapple04", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple04_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple04_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple04_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple05_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple05_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple05 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple05 = { "Grapple05", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple05_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple05_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple05_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple06_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple06_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple06 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple06 = { "Grapple06", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple06_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple06_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple06_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple07_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple07_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple07 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple07 = { "Grapple07", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple07_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple07_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple07_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple08_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple08_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple08 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple08 = { "Grapple08", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple08_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple08_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple08_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple09_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple09_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Grapple09 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple09 = { "Grapple09", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple09_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple09_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple09_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly00_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly00_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly00 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly00 = { "HighFly00", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly00_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly00_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly00_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly01_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly01 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly01 = { "HighFly01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly01_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly02_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly02 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly02 = { "HighFly02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly02_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly03_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly03_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly03 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly03 = { "HighFly03", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly03_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly03_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly04_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly04_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly04 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly04 = { "HighFly04", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly04_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly04_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly04_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly05_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly05_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly05 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly05 = { "HighFly05", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly05_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly05_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly05_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly06_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly06_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly06 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly06 = { "HighFly06", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly06_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly06_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly06_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly07_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly07_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly07 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly07 = { "HighFly07", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly07_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly07_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly07_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly08_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly08_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly08 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly08 = { "HighFly08", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly08_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly08_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly08_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly09_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly09_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->HighFly09 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly09 = { "HighFly09", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly09_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly09_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly09_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon00_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon00_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon00 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon00 = { "Weapon00", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon00_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon00_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon00_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon01_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon01 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon01 = { "Weapon01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon01_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon02_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon02 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon02 = { "Weapon02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon02_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon03_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon03_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon03 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon03 = { "Weapon03", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon03_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon03_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon04_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon04_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon04 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon04 = { "Weapon04", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon04_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon04_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon04_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon05_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon05_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon05 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon05 = { "Weapon05", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon05_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon05_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon05_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon06_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon06_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon06 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon06 = { "Weapon06", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon06_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon06_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon06_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon07_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon07_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon07 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon07 = { "Weapon07", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon07_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon07_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon07_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon08_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon08_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon08 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon08 = { "Weapon08", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon08_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon08_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon08_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon09_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon09_SetBit(void* Obj)
	{
		((FSSHeatSkillDefaultSettings*)Obj)->Weapon09 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon09 = { "Weapon09", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSHeatSkillDefaultSettings), &Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon09_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon09_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon09_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike00,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike04,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike05,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike06,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike07,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike08,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Strike09,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple00,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple04,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple05,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple06,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple07,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple08,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Grapple09,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly00,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly04,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly05,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly06,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly07,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly08,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_HighFly09,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon00,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon04,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon05,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon06,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon07,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon08,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::NewProp_Weapon09,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSHeatSkillDefaultSettings",
		sizeof(FSSHeatSkillDefaultSettings),
		alignof(FSSHeatSkillDefaultSettings),
		Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHeatSkillDefaultSettings"), sizeof(FSSHeatSkillDefaultSettings), Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings_Hash() { return 3880671004U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
