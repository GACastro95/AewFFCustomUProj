// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELAdjustDlcPlayerSaveDataAccessObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAdjustDlcPlayerSaveDataAccessObject() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject();
	ELITE_API UClass* Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELAdjustDlcPlayerSaveDataAccessObject::StaticRegisterNativesUELAdjustDlcPlayerSaveDataAccessObject()
	{
	}
	UClass* Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_NoRegister()
	{
		return UELAdjustDlcPlayerSaveDataAccessObject::StaticClass();
	}
	struct Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAdjustDlcPlayerSaveDataAccessObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcPlayerSaveDataAccessObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAdjustDlcPlayerSaveDataAccessObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_Statics::ClassParams = {
		&UELAdjustDlcPlayerSaveDataAccessObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAdjustDlcPlayerSaveDataAccessObject, 2331371383);
	template<> ELITE_API UClass* StaticClass<UELAdjustDlcPlayerSaveDataAccessObject>()
	{
		return UELAdjustDlcPlayerSaveDataAccessObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAdjustDlcPlayerSaveDataAccessObject(Z_Construct_UClass_UELAdjustDlcPlayerSaveDataAccessObject, &UELAdjustDlcPlayerSaveDataAccessObject::StaticClass, TEXT("/Script/ELITE"), TEXT("UELAdjustDlcPlayerSaveDataAccessObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAdjustDlcPlayerSaveDataAccessObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
