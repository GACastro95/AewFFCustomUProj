// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerSnapShotManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerSnapShotManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSnapShotManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSnapShotManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerSnapShotManager::execChangeSceneCaptureSourceFromPlatform)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_pCaptureComponent2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSceneCaptureSourceFromPlatform(Z_Param_pCaptureComponent2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSnapShotManager::execResizeSnapshotResolutionFromPlatform)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_pTextureRenderTarget2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResizeSnapshotResolutionFromPlatform(Z_Param_pTextureRenderTarget2D);
		P_NATIVE_END;
	}
	static FName NAME_AELCareerSnapShotManager_CaptureFrameBuffer = FName(TEXT("CaptureFrameBuffer"));
	void AELCareerSnapShotManager::CaptureFrameBuffer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELCareerSnapShotManager_CaptureFrameBuffer),NULL);
	}
	void AELCareerSnapShotManager::StaticRegisterNativesAELCareerSnapShotManager()
	{
		UClass* Class = AELCareerSnapShotManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSceneCaptureSourceFromPlatform", &AELCareerSnapShotManager::execChangeSceneCaptureSourceFromPlatform },
			{ "ResizeSnapshotResolutionFromPlatform", &AELCareerSnapShotManager::execResizeSnapshotResolutionFromPlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerSnapShotManager_CaptureFrameBuffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSnapShotManager_CaptureFrameBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapShotManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSnapShotManager_CaptureFrameBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSnapShotManager, nullptr, "CaptureFrameBuffer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSnapShotManager_CaptureFrameBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSnapShotManager_CaptureFrameBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSnapShotManager_CaptureFrameBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSnapShotManager_CaptureFrameBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics
	{
		struct ELCareerSnapShotManager_eventChangeSceneCaptureSourceFromPlatform_Parms
		{
			USceneCaptureComponent2D* pCaptureComponent2D;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pCaptureComponent2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pCaptureComponent2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::NewProp_pCaptureComponent2D_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::NewProp_pCaptureComponent2D = { "pCaptureComponent2D", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapShotManager_eventChangeSceneCaptureSourceFromPlatform_Parms, pCaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::NewProp_pCaptureComponent2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::NewProp_pCaptureComponent2D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::NewProp_pCaptureComponent2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapShotManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSnapShotManager, nullptr, "ChangeSceneCaptureSourceFromPlatform", nullptr, nullptr, sizeof(ELCareerSnapShotManager_eventChangeSceneCaptureSourceFromPlatform_Parms), Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics
	{
		struct ELCareerSnapShotManager_eventResizeSnapshotResolutionFromPlatform_Parms
		{
			UTextureRenderTarget2D* pTextureRenderTarget2D;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pTextureRenderTarget2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::NewProp_pTextureRenderTarget2D = { "pTextureRenderTarget2D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapShotManager_eventResizeSnapshotResolutionFromPlatform_Parms, pTextureRenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::NewProp_pTextureRenderTarget2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapShotManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSnapShotManager, nullptr, "ResizeSnapshotResolutionFromPlatform", nullptr, nullptr, sizeof(ELCareerSnapShotManager_eventResizeSnapshotResolutionFromPlatform_Parms), Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerSnapShotManager_NoRegister()
	{
		return AELCareerSnapShotManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerSnapShotManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerSnapShotManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerSnapShotManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerSnapShotManager_CaptureFrameBuffer, "CaptureFrameBuffer" }, // 3077077370
		{ &Z_Construct_UFunction_AELCareerSnapShotManager_ChangeSceneCaptureSourceFromPlatform, "ChangeSceneCaptureSourceFromPlatform" }, // 1427041603
		{ &Z_Construct_UFunction_AELCareerSnapShotManager_ResizeSnapshotResolutionFromPlatform, "ResizeSnapshotResolutionFromPlatform" }, // 4214873374
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSnapShotManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerSnapShotManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerSnapShotManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerSnapShotManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerSnapShotManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerSnapShotManager_Statics::ClassParams = {
		&AELCareerSnapShotManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerSnapShotManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSnapShotManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerSnapShotManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerSnapShotManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerSnapShotManager, 604335716);
	template<> ABP_200508_API UClass* StaticClass<AELCareerSnapShotManager>()
	{
		return AELCareerSnapShotManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerSnapShotManager(Z_Construct_UClass_AELCareerSnapShotManager, &AELCareerSnapShotManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerSnapShotManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerSnapShotManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
