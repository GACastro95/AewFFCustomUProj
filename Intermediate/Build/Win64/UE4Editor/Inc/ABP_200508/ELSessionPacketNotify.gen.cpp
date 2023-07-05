// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSessionPacketNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSessionPacketNotify() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSessionPacketNotify_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSessionPacketNotify();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELSessionPacketNotifyType();
// End Cross Module References
	void UELSessionPacketNotify::StaticRegisterNativesUELSessionPacketNotify()
	{
	}
	UClass* Z_Construct_UClass_UELSessionPacketNotify_NoRegister()
	{
		return UELSessionPacketNotify::StaticClass();
	}
	struct Z_Construct_UClass_UELSessionPacketNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NotifyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSessionPacketNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSessionPacketNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSessionPacketNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSessionPacketNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSessionPacketNotify_Statics::NewProp_NotifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSessionPacketNotify_Statics::NewProp_NotifyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSessionPacketNotify" },
		{ "ModuleRelativePath", "Public/ELSessionPacketNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSessionPacketNotify_Statics::NewProp_NotifyType = { "NotifyType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSessionPacketNotify, NotifyType), Z_Construct_UEnum_ABP_200508_EELSessionPacketNotifyType, METADATA_PARAMS(Z_Construct_UClass_UELSessionPacketNotify_Statics::NewProp_NotifyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketNotify_Statics::NewProp_NotifyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSessionPacketNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSessionPacketNotify_Statics::NewProp_NotifyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSessionPacketNotify_Statics::NewProp_NotifyType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSessionPacketNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSessionPacketNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSessionPacketNotify_Statics::ClassParams = {
		&UELSessionPacketNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSessionPacketNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketNotify_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSessionPacketNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSessionPacketNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSessionPacketNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSessionPacketNotify, 151512843);
	template<> ABP_200508_API UClass* StaticClass<UELSessionPacketNotify>()
	{
		return UELSessionPacketNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSessionPacketNotify(Z_Construct_UClass_UELSessionPacketNotify, &UELSessionPacketNotify::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSessionPacketNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSessionPacketNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
