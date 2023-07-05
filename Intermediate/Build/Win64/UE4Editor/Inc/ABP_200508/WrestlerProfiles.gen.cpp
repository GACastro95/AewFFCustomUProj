// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/WrestlerProfiles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerProfiles() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UWrestlerProfiles_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UWrestlerProfiles();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FPersonParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FPresetParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UWrestlerProfilesInterface_NoRegister();
// End Cross Module References
	void UWrestlerProfiles::StaticRegisterNativesUWrestlerProfiles()
	{
	}
	UClass* Z_Construct_UClass_UWrestlerProfiles_NoRegister()
	{
		return UWrestlerProfiles::StaticClass();
	}
	struct Z_Construct_UClass_UWrestlerProfiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Person_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Person;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HudTex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrestlerProfiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterProfilesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerProfiles_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WrestlerProfiles.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WrestlerProfiles.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Person_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerProfiles" },
		{ "ModuleRelativePath", "Public/WrestlerProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Person = { "Person", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrestlerProfiles, Person), Z_Construct_UScriptStruct_FPersonParam, METADATA_PARAMS(Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Person_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Person_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Preset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerProfiles" },
		{ "ModuleRelativePath", "Public/WrestlerProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrestlerProfiles, Preset), Z_Construct_UScriptStruct_FPresetParam, METADATA_PARAMS(Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Skill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerProfiles" },
		{ "ModuleRelativePath", "Public/WrestlerProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrestlerProfiles, Skill), Z_Construct_UScriptStruct_FWrestlingSkillParam, METADATA_PARAMS(Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Skill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_HudTex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerProfiles" },
		{ "ModuleRelativePath", "Public/WrestlerProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_HudTex = { "HudTex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrestlerProfiles, HudTex), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_HudTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_HudTex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWrestlerProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Person,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_Skill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrestlerProfiles_Statics::NewProp_HudTex,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWrestlerProfiles_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCharacterProfilesInterface_NoRegister, (int32)VTABLE_OFFSET(UWrestlerProfiles, ICharacterProfilesInterface), false },
			{ Z_Construct_UClass_UWrestlerProfilesInterface_NoRegister, (int32)VTABLE_OFFSET(UWrestlerProfiles, IWrestlerProfilesInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrestlerProfiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrestlerProfiles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWrestlerProfiles_Statics::ClassParams = {
		&UWrestlerProfiles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWrestlerProfiles_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerProfiles_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWrestlerProfiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerProfiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrestlerProfiles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWrestlerProfiles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWrestlerProfiles, 597270847);
	template<> ABP_200508_API UClass* StaticClass<UWrestlerProfiles>()
	{
		return UWrestlerProfiles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWrestlerProfiles(Z_Construct_UClass_UWrestlerProfiles, &UWrestlerProfiles::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UWrestlerProfiles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrestlerProfiles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
