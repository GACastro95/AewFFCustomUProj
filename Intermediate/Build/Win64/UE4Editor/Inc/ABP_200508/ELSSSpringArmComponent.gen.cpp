// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSpringArmComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSpringArmComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSpringArmComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSpringArmComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSSpringArmComponent::StaticRegisterNativesUELSSSpringArmComponent()
	{
	}
	UClass* Z_Construct_UClass_UELSSSpringArmComponent_NoRegister()
	{
		return UELSSSpringArmComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSSpringArmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArmLengthInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetArmLengthInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFixTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraFixTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCameraFixedPrev_MetaData[];
#endif
		static void NewProp_bIsCameraFixedPrev_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCameraFixedPrev;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSSpringArmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSpringArmComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "ELSSSpringArmComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSpringArmComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_TargetArmLengthInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSpringArmComponent" },
		{ "ModuleRelativePath", "Public/ELSSSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_TargetArmLengthInterpSpeed = { "TargetArmLengthInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSSpringArmComponent, TargetArmLengthInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_TargetArmLengthInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_TargetArmLengthInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_CameraFixTolerance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSpringArmComponent" },
		{ "ModuleRelativePath", "Public/ELSSSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_CameraFixTolerance = { "CameraFixTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSSpringArmComponent, CameraFixTolerance), METADATA_PARAMS(Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_CameraFixTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_CameraFixTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_bIsCameraFixedPrev_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSpringArmComponent" },
		{ "ModuleRelativePath", "Public/ELSSSpringArmComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_bIsCameraFixedPrev_SetBit(void* Obj)
	{
		((UELSSSpringArmComponent*)Obj)->bIsCameraFixedPrev = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_bIsCameraFixedPrev = { "bIsCameraFixedPrev", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSSpringArmComponent), &Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_bIsCameraFixedPrev_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_bIsCameraFixedPrev_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_bIsCameraFixedPrev_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSSpringArmComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_TargetArmLengthInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_CameraFixTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSpringArmComponent_Statics::NewProp_bIsCameraFixedPrev,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSSpringArmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSSpringArmComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSSpringArmComponent_Statics::ClassParams = {
		&UELSSSpringArmComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSSpringArmComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSpringArmComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSSpringArmComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSpringArmComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSSpringArmComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSSpringArmComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSSpringArmComponent, 259558167);
	template<> ABP_200508_API UClass* StaticClass<UELSSSpringArmComponent>()
	{
		return UELSSSpringArmComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSSpringArmComponent(Z_Construct_UClass_UELSSSpringArmComponent, &UELSSSpringArmComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSSpringArmComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSSpringArmComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
