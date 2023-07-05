// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SnapshotCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotCaptureComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USnapshotCaptureComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USnapshotCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USnapshotCaptureComponent::execCaptureScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureScene();
		P_NATIVE_END;
	}
	void USnapshotCaptureComponent::StaticRegisterNativesUSnapshotCaptureComponent()
	{
		UClass* Class = USnapshotCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureScene", &USnapshotCaptureComponent::execCaptureScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnapshotCaptureComponent_CaptureScene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapshotCaptureComponent_CaptureScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SnapshotCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapshotCaptureComponent_CaptureScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapshotCaptureComponent, nullptr, "CaptureScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapshotCaptureComponent_CaptureScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapshotCaptureComponent_CaptureScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapshotCaptureComponent_CaptureScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USnapshotCaptureComponent_CaptureScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USnapshotCaptureComponent_NoRegister()
	{
		return USnapshotCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_USnapshotCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TextureTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TextureTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapshotCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnapshotCaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapshotCaptureComponent_CaptureScene, "CaptureScene" }, // 481304895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapshotCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SnapshotCaptureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SnapshotCaptureComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapshotCaptureComponent_Statics::NewProp_m_TextureTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotCaptureComponent" },
		{ "ModuleRelativePath", "Public/SnapshotCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapshotCaptureComponent_Statics::NewProp_m_TextureTarget = { "m_TextureTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapshotCaptureComponent, m_TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapshotCaptureComponent_Statics::NewProp_m_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotCaptureComponent_Statics::NewProp_m_TextureTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapshotCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotCaptureComponent_Statics::NewProp_m_TextureTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapshotCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapshotCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USnapshotCaptureComponent_Statics::ClassParams = {
		&USnapshotCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USnapshotCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotCaptureComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USnapshotCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapshotCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USnapshotCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USnapshotCaptureComponent, 1361824153);
	template<> ABP_200508_API UClass* StaticClass<USnapshotCaptureComponent>()
	{
		return USnapshotCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USnapshotCaptureComponent(Z_Construct_UClass_USnapshotCaptureComponent, &USnapshotCaptureComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USnapshotCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapshotCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
