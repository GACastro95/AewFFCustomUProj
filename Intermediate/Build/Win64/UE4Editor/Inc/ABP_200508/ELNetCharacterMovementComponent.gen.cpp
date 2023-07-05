// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetCharacterMovementComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELNetCharacterMovementComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UELNetCharacterMovementComponent::StaticRegisterNativesUELNetCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UELNetCharacterMovementComponent_NoRegister()
	{
		return UELNetCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELNetCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELNetCharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELNetCharacterOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetworkLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkRootMotionPositionDiffThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkRootMotionPositionDiffThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkPositionDiffThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkPositionDiffThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkPositionDiffAccelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkPositionDiffAccelScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELNetCharacterMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_ELNetCharacterOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELNetCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_ELNetCharacterOwner = { "ELNetCharacterOwner", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetCharacterMovementComponent, ELNetCharacterOwner), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_ELNetCharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_ELNetCharacterOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELNetCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkLocation = { "NetworkLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetCharacterMovementComponent, NetworkLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkDeltaTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELNetCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkDeltaTime = { "NetworkDeltaTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetCharacterMovementComponent, NetworkDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkRootMotionPositionDiffThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELNetCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkRootMotionPositionDiffThreshold = { "NetworkRootMotionPositionDiffThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetCharacterMovementComponent, NetworkRootMotionPositionDiffThreshold), METADATA_PARAMS(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkRootMotionPositionDiffThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkRootMotionPositionDiffThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELNetCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffThreshold = { "NetworkPositionDiffThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetCharacterMovementComponent, NetworkPositionDiffThreshold), METADATA_PARAMS(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffAccelScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELNetCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffAccelScale = { "NetworkPositionDiffAccelScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetCharacterMovementComponent, NetworkPositionDiffAccelScale), METADATA_PARAMS(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffAccelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffAccelScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_ELNetCharacterOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkRootMotionPositionDiffThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::NewProp_NetworkPositionDiffAccelScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELNetCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::ClassParams = {
		&UELNetCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELNetCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELNetCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELNetCharacterMovementComponent, 3191371855);
	template<> ABP_200508_API UClass* StaticClass<UELNetCharacterMovementComponent>()
	{
		return UELNetCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELNetCharacterMovementComponent(Z_Construct_UClass_UELNetCharacterMovementComponent, &UELNetCharacterMovementComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELNetCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELNetCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
