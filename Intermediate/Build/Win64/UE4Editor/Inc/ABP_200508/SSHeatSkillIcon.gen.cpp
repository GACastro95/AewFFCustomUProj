// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHeatSkillIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHeatSkillIcon() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillIcon();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillIconType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSHeatSkillIcon>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSHeatSkillIcon cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSHeatSkillIcon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillIcon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHeatSkillIcon, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHeatSkillIcon"), sizeof(FSSHeatSkillIcon), Get_Z_Construct_UScriptStruct_FSSHeatSkillIcon_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHeatSkillIcon>()
{
	return FSSHeatSkillIcon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHeatSkillIcon(FSSHeatSkillIcon::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHeatSkillIcon"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillIcon
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillIcon()
	{
		UScriptStruct::DeferCppStructOps<FSSHeatSkillIcon>(FName(TEXT("SSHeatSkillIcon")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillIcon;
	struct Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IconType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IconType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHeatSkillIcon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHeatSkillIcon>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_IconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_IconType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillIcon" },
		{ "ModuleRelativePath", "Public/SSHeatSkillIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_IconType = { "IconType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillIcon, IconType), Z_Construct_UEnum_ABP_200508_ESSHeatSkillIconType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_IconType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_IconType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_Image_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillIcon" },
		{ "ModuleRelativePath", "Public/SSHeatSkillIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillIcon, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_IconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_IconType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::NewProp_Image,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSHeatSkillIcon",
		sizeof(FSSHeatSkillIcon),
		alignof(FSSHeatSkillIcon),
		Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillIcon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillIcon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHeatSkillIcon"), sizeof(FSSHeatSkillIcon), Get_Z_Construct_UScriptStruct_FSSHeatSkillIcon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHeatSkillIcon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillIcon_Hash() { return 1899239223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
