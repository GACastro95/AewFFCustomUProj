// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDataLoadingGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDataLoadingGameState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDataLoadingGameState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDataLoadingGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDataLoadingFlow_NoRegister();
// End Cross Module References
	void AELSSDataLoadingGameState::StaticRegisterNativesAELSSDataLoadingGameState()
	{
	}
	UClass* Z_Construct_UClass_AELSSDataLoadingGameState_NoRegister()
	{
		return AELSSDataLoadingGameState::StaticClass();
	}
	struct Z_Construct_UClass_AELSSDataLoadingGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataLoadingFlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataLoadingFlow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSDataLoadingGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDataLoadingGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSDataLoadingGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDataLoadingGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDataLoadingGameState_Statics::NewProp_DataLoadingFlow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDataLoadingGameState" },
		{ "ModuleRelativePath", "Public/ELSSDataLoadingGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDataLoadingGameState_Statics::NewProp_DataLoadingFlow = { "DataLoadingFlow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDataLoadingGameState, DataLoadingFlow), Z_Construct_UClass_AELSSDataLoadingFlow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDataLoadingGameState_Statics::NewProp_DataLoadingFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDataLoadingGameState_Statics::NewProp_DataLoadingFlow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSDataLoadingGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDataLoadingGameState_Statics::NewProp_DataLoadingFlow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSDataLoadingGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSDataLoadingGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSDataLoadingGameState_Statics::ClassParams = {
		&AELSSDataLoadingGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELSSDataLoadingGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDataLoadingGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSDataLoadingGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDataLoadingGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSDataLoadingGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSDataLoadingGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSDataLoadingGameState, 1098340167);
	template<> ABP_200508_API UClass* StaticClass<AELSSDataLoadingGameState>()
	{
		return AELSSDataLoadingGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSDataLoadingGameState(Z_Construct_UClass_AELSSDataLoadingGameState, &AELSSDataLoadingGameState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSDataLoadingGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSDataLoadingGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
