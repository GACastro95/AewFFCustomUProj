// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSLobbyMiniGameSteps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSLobbyMiniGameSteps() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyMiniGameSteps_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyMiniGameSteps();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps();
// End Cross Module References
	void UELEOSLobbyMiniGameSteps::StaticRegisterNativesUELEOSLobbyMiniGameSteps()
	{
	}
	UClass* Z_Construct_UClass_UELEOSLobbyMiniGameSteps_NoRegister()
	{
		return UELEOSLobbyMiniGameSteps::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Step_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSLobbyMiniGameSteps.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::NewProp_Step_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::NewProp_Step_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGameSteps" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyMiniGameSteps, Step), Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::NewProp_Step_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::NewProp_Step_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::NewProp_Step,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSLobbyMiniGameSteps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::ClassParams = {
		&UELEOSLobbyMiniGameSteps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSLobbyMiniGameSteps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSLobbyMiniGameSteps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSLobbyMiniGameSteps, 1133485459);
	template<> ABP_200508_API UClass* StaticClass<UELEOSLobbyMiniGameSteps>()
	{
		return UELEOSLobbyMiniGameSteps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSLobbyMiniGameSteps(Z_Construct_UClass_UELEOSLobbyMiniGameSteps, &UELEOSLobbyMiniGameSteps::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSLobbyMiniGameSteps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSLobbyMiniGameSteps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
