// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameViewportClient() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGameViewportClient_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
// End Cross Module References
	void UELGameViewportClient::StaticRegisterNativesUELGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UELGameViewportClient_NoRegister()
	{
		return UELGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UELGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindowModeStack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowModeStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WindowModeStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameViewportClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameViewportClient.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELGameViewportClient_Statics::NewProp_WindowModeStack_Inner = { "WindowModeStack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameViewportClient_Statics::NewProp_WindowModeStack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameViewportClient" },
		{ "ModuleRelativePath", "Public/ELGameViewportClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELGameViewportClient_Statics::NewProp_WindowModeStack = { "WindowModeStack", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameViewportClient, WindowModeStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELGameViewportClient_Statics::NewProp_WindowModeStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameViewportClient_Statics::NewProp_WindowModeStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELGameViewportClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameViewportClient_Statics::NewProp_WindowModeStack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameViewportClient_Statics::NewProp_WindowModeStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameViewportClient_Statics::ClassParams = {
		&UELGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELGameViewportClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELGameViewportClient_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UELGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameViewportClient, 1085835196);
	template<> ABP_200508_API UClass* StaticClass<UELGameViewportClient>()
	{
		return UELGameViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameViewportClient(Z_Construct_UClass_UELGameViewportClient, &UELGameViewportClient::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
