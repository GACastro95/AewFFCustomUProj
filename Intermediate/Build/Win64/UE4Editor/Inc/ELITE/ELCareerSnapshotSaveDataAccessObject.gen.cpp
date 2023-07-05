// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCareerSnapshotSaveDataAccessObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerSnapshotSaveDataAccessObject() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject();
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataAccessObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELCareerSnapshotSaveDataAccessObject::StaticRegisterNativesUELCareerSnapshotSaveDataAccessObject()
	{
	}
	UClass* Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_NoRegister()
	{
		return UELCareerSnapshotSaveDataAccessObject::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileNoList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNoList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileNoList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveDataAccessObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerSnapshotSaveDataAccessObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerSnapshotSaveDataAccessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::NewProp_FileNoList_Inner = { "FileNoList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::NewProp_FileNoList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSnapshotSaveDataAccessObject" },
		{ "ModuleRelativePath", "Public/ELCareerSnapshotSaveDataAccessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::NewProp_FileNoList = { "FileNoList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerSnapshotSaveDataAccessObject, FileNoList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::NewProp_FileNoList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::NewProp_FileNoList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::NewProp_FileNoList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::NewProp_FileNoList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerSnapshotSaveDataAccessObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::ClassParams = {
		&UELCareerSnapshotSaveDataAccessObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerSnapshotSaveDataAccessObject, 605410064);
	template<> ELITE_API UClass* StaticClass<UELCareerSnapshotSaveDataAccessObject>()
	{
		return UELCareerSnapshotSaveDataAccessObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerSnapshotSaveDataAccessObject(Z_Construct_UClass_UELCareerSnapshotSaveDataAccessObject, &UELCareerSnapshotSaveDataAccessObject::StaticClass, TEXT("/Script/ELITE"), TEXT("UELCareerSnapshotSaveDataAccessObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerSnapshotSaveDataAccessObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
