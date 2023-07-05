// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAudioVolumeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioVolumeSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAudioVolumeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters();
// End Cross Module References
	void UAtomAudioVolumeSettings::StaticRegisterNativesUAtomAudioVolumeSettings()
	{
	}
	UClass* Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister()
	{
		return UAtomAudioVolumeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAudioVolumeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomAudioVolumeParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomAudioVolumeSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeSettings" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters = { "AtomAudioVolumeParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomAudioVolumeSettings, AtomAudioVolumeParameters), Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioVolumeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::ClassParams = {
		&UAtomAudioVolumeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAudioVolumeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomAudioVolumeSettings, 3734332653);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomAudioVolumeSettings>()
	{
		return UAtomAudioVolumeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomAudioVolumeSettings(Z_Construct_UClass_UAtomAudioVolumeSettings, &UAtomAudioVolumeSettings::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomAudioVolumeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioVolumeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
