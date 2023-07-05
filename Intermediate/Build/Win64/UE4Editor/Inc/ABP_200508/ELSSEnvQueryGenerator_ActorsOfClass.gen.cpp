// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSEnvQueryGenerator_ActorsOfClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSEnvQueryGenerator_ActorsOfClass() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActorType();
// End Cross Module References
	void UELSSEnvQueryGenerator_ActorsOfClass::StaticRegisterNativesUELSSEnvQueryGenerator_ActorsOfClass()
	{
	}
	UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_NoRegister()
	{
		return UELSSEnvQueryGenerator_ActorsOfClass::StaticClass();
	}
	struct Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInteractableObject_MetaData[];
#endif
		static void NewProp_IsInteractableObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInteractableObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SSActorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSActorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SSActorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSEnvQueryGenerator_ActorsOfClass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSEnvQueryGenerator_ActorsOfClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_IsInteractableObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSEnvQueryGenerator_ActorsOfClass" },
		{ "ModuleRelativePath", "Public/ELSSEnvQueryGenerator_ActorsOfClass.h" },
	};
#endif
	void Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_IsInteractableObject_SetBit(void* Obj)
	{
		((UELSSEnvQueryGenerator_ActorsOfClass*)Obj)->IsInteractableObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_IsInteractableObject = { "IsInteractableObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSEnvQueryGenerator_ActorsOfClass), &Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_IsInteractableObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_IsInteractableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_IsInteractableObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SSActorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SSActorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSEnvQueryGenerator_ActorsOfClass" },
		{ "ModuleRelativePath", "Public/ELSSEnvQueryGenerator_ActorsOfClass.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SSActorType = { "SSActorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSEnvQueryGenerator_ActorsOfClass, SSActorType), Z_Construct_UEnum_ABP_200508_ESSActorType, METADATA_PARAMS(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SSActorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SSActorType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_IsInteractableObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SSActorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SSActorType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSEnvQueryGenerator_ActorsOfClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::ClassParams = {
		&UELSSEnvQueryGenerator_ActorsOfClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSEnvQueryGenerator_ActorsOfClass, 1364563124);
	template<> ABP_200508_API UClass* StaticClass<UELSSEnvQueryGenerator_ActorsOfClass>()
	{
		return UELSSEnvQueryGenerator_ActorsOfClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSEnvQueryGenerator_ActorsOfClass(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClass, &UELSSEnvQueryGenerator_ActorsOfClass::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSEnvQueryGenerator_ActorsOfClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSEnvQueryGenerator_ActorsOfClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
