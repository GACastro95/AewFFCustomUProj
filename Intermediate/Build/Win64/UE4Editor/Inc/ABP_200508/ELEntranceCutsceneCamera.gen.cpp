// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneCamera() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneCamera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneCamera();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELEntranceCutsceneCamera::execGetCameraOffsetHeightRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCameraOffsetHeightRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneCamera::execGetCastAll)
	{
		P_GET_TARRAY_REF(AELCharacter_Native*,Z_Param_Out_Casts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCastAll(Z_Param_Out_Casts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneCamera::execStartCameraOffsetHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCameraOffsetHeight(Z_Param_InterpolationTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneCamera::execStopCameraOffsetHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCameraOffsetHeight(Z_Param_InterpolationTime);
		P_NATIVE_END;
	}
	void AELEntranceCutsceneCamera::StaticRegisterNativesAELEntranceCutsceneCamera()
	{
		UClass* Class = AELEntranceCutsceneCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraOffsetHeightRate", &AELEntranceCutsceneCamera::execGetCameraOffsetHeightRate },
			{ "GetCastAll", &AELEntranceCutsceneCamera::execGetCastAll },
			{ "StartCameraOffsetHeight", &AELEntranceCutsceneCamera::execStartCameraOffsetHeight },
			{ "StopCameraOffsetHeight", &AELEntranceCutsceneCamera::execStopCameraOffsetHeight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics
	{
		struct ELEntranceCutsceneCamera_eventGetCameraOffsetHeightRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneCamera_eventGetCameraOffsetHeightRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneCamera, nullptr, "GetCameraOffsetHeightRate", nullptr, nullptr, sizeof(ELEntranceCutsceneCamera_eventGetCameraOffsetHeightRate_Parms), Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics
	{
		struct ELEntranceCutsceneCamera_eventGetCastAll_Parms
		{
			TArray<AELCharacter_Native*> Casts;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Casts_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Casts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::NewProp_Casts_Inner = { "Casts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::NewProp_Casts = { "Casts", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneCamera_eventGetCastAll_Parms, Casts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::NewProp_Casts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::NewProp_Casts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneCamera, nullptr, "GetCastAll", nullptr, nullptr, sizeof(ELEntranceCutsceneCamera_eventGetCastAll_Parms), Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics
	{
		struct ELEntranceCutsceneCamera_eventStartCameraOffsetHeight_Parms
		{
			float InterpolationTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneCamera_eventStartCameraOffsetHeight_Parms, InterpolationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::NewProp_InterpolationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneCamera, nullptr, "StartCameraOffsetHeight", nullptr, nullptr, sizeof(ELEntranceCutsceneCamera_eventStartCameraOffsetHeight_Parms), Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics
	{
		struct ELEntranceCutsceneCamera_eventStopCameraOffsetHeight_Parms
		{
			float InterpolationTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneCamera_eventStopCameraOffsetHeight_Parms, InterpolationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::NewProp_InterpolationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneCamera, nullptr, "StopCameraOffsetHeight", nullptr, nullptr, sizeof(ELEntranceCutsceneCamera_eventStopCameraOffsetHeight_Parms), Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELEntranceCutsceneCamera_NoRegister()
	{
		return AELEntranceCutsceneCamera::StaticClass();
	}
	struct Z_Construct_UClass_AELEntranceCutsceneCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEntranceCutsceneCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELEntranceCutsceneCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCameraOffsetHeightRate, "GetCameraOffsetHeightRate" }, // 3412217738
		{ &Z_Construct_UFunction_AELEntranceCutsceneCamera_GetCastAll, "GetCastAll" }, // 775741467
		{ &Z_Construct_UFunction_AELEntranceCutsceneCamera_StartCameraOffsetHeight, "StartCameraOffsetHeight" }, // 4254573188
		{ &Z_Construct_UFunction_AELEntranceCutsceneCamera_StopCameraOffsetHeight, "StopCameraOffsetHeight" }, // 209836833
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "ELEntranceCutsceneCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneCamera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEntranceCutsceneCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEntranceCutsceneCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEntranceCutsceneCamera_Statics::ClassParams = {
		&AELEntranceCutsceneCamera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEntranceCutsceneCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEntranceCutsceneCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEntranceCutsceneCamera, 2322327371);
	template<> ABP_200508_API UClass* StaticClass<AELEntranceCutsceneCamera>()
	{
		return AELEntranceCutsceneCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEntranceCutsceneCamera(Z_Construct_UClass_AELEntranceCutsceneCamera, &AELEntranceCutsceneCamera::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEntranceCutsceneCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEntranceCutsceneCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
