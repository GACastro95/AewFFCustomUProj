// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELSceneCaptureComponent2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSceneCaptureComponent2D() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELSceneCaptureComponent2D_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELSceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	void UELSceneCaptureComponent2D::StaticRegisterNativesUELSceneCaptureComponent2D()
	{
	}
	UClass* Z_Construct_UClass_UELSceneCaptureComponent2D_NoRegister()
	{
		return UELSceneCaptureComponent2D::StaticClass();
	}
	struct Z_Construct_UClass_UELSceneCaptureComponent2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "ELSceneCaptureComponent2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSceneCaptureComponent2D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::NewProp_StreamingFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSceneCaptureComponent2D" },
		{ "ModuleRelativePath", "Public/ELSceneCaptureComponent2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::NewProp_StreamingFactor = { "StreamingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSceneCaptureComponent2D, StreamingFactor), METADATA_PARAMS(Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::NewProp_StreamingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::NewProp_StreamingFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::NewProp_StreamingFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSceneCaptureComponent2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::ClassParams = {
		&UELSceneCaptureComponent2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSceneCaptureComponent2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSceneCaptureComponent2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSceneCaptureComponent2D, 3708659676);
	template<> ELITE_CORE_API UClass* StaticClass<UELSceneCaptureComponent2D>()
	{
		return UELSceneCaptureComponent2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSceneCaptureComponent2D(Z_Construct_UClass_UELSceneCaptureComponent2D, &UELSceneCaptureComponent2D::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELSceneCaptureComponent2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSceneCaptureComponent2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
