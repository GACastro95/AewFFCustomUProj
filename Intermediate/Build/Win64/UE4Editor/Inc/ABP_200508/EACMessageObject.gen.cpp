// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EACMessageObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEACMessageObject() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UEACMessageObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UEACMessageObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UEACMessageObject::StaticRegisterNativesUEACMessageObject()
	{
	}
	UClass* Z_Construct_UClass_UEACMessageObject_NoRegister()
	{
		return UEACMessageObject::StaticClass();
	}
	struct Z_Construct_UClass_UEACMessageObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MessageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEACMessageObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEACMessageObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EACMessageObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EACMessageObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEACMessageObject_Statics::NewProp_MessageData_Inner = { "MessageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEACMessageObject_Statics::NewProp_MessageData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EACMessageObject" },
		{ "ModuleRelativePath", "Public/EACMessageObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEACMessageObject_Statics::NewProp_MessageData = { "MessageData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEACMessageObject, MessageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEACMessageObject_Statics::NewProp_MessageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEACMessageObject_Statics::NewProp_MessageData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEACMessageObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEACMessageObject_Statics::NewProp_MessageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEACMessageObject_Statics::NewProp_MessageData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEACMessageObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEACMessageObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEACMessageObject_Statics::ClassParams = {
		&UEACMessageObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEACMessageObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEACMessageObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEACMessageObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEACMessageObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEACMessageObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEACMessageObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEACMessageObject, 2404950776);
	template<> ABP_200508_API UClass* StaticClass<UEACMessageObject>()
	{
		return UEACMessageObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEACMessageObject(Z_Construct_UClass_UEACMessageObject, &UEACMessageObject::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UEACMessageObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEACMessageObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
