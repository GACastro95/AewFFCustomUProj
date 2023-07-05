// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCameraLocatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCameraLocatorComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraLocatorComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraLocatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSStationalCameraLookAt();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UELSSCameraLocatorComponent::StaticRegisterNativesUELSSCameraLocatorComponent()
	{
	}
	UClass* Z_Construct_UClass_UELSSCameraLocatorComponent_NoRegister()
	{
		return UELSSCameraLocatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSCameraLocatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocatorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LookAtMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LookAtMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackingInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SatelliteMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SatelliteMoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ELSSCameraLocatorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCameraLocatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LocatorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraLocatorComponent" },
		{ "ModuleRelativePath", "Public/ELSSCameraLocatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LocatorId = { "LocatorId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraLocatorComponent, LocatorId), METADATA_PARAMS(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LocatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LocatorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_FocalLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraLocatorComponent" },
		{ "ModuleRelativePath", "Public/ELSSCameraLocatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraLocatorComponent, FocalLength), METADATA_PARAMS(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_FocalLength_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraLocatorComponent" },
		{ "ModuleRelativePath", "Public/ELSSCameraLocatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtMode = { "LookAtMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraLocatorComponent, LookAtMode), Z_Construct_UEnum_ABP_200508_ESSStationalCameraLookAt, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraLocatorComponent" },
		{ "ModuleRelativePath", "Public/ELSSCameraLocatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtOffset = { "LookAtOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraLocatorComponent, LookAtOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_TrackingInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraLocatorComponent" },
		{ "ModuleRelativePath", "Public/ELSSCameraLocatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_TrackingInterpSpeed = { "TrackingInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraLocatorComponent, TrackingInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_TrackingInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_TrackingInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_SatelliteMoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraLocatorComponent" },
		{ "ModuleRelativePath", "Public/ELSSCameraLocatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_SatelliteMoveSpeed = { "SatelliteMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraLocatorComponent, SatelliteMoveSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_SatelliteMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_SatelliteMoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LocatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_FocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_LookAtOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_TrackingInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::NewProp_SatelliteMoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSCameraLocatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::ClassParams = {
		&UELSSCameraLocatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSCameraLocatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSCameraLocatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSCameraLocatorComponent, 2700354152);
	template<> ABP_200508_API UClass* StaticClass<UELSSCameraLocatorComponent>()
	{
		return UELSSCameraLocatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSCameraLocatorComponent(Z_Construct_UClass_UELSSCameraLocatorComponent, &UELSSCameraLocatorComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSCameraLocatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSCameraLocatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
