// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/GameplayCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCamera() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_AGameplayCamera_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_AGameplayCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AGameplayCamera::execCalcCameraLocationByTargetPoints)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_GET_STRUCT(FRotator,Z_Param_CameraRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FovXDegrees);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AspectRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FovLeftMargin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FovRightMargin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FovBottomMargin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FovTopMargin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalcCameraLocationByTargetPoints(Z_Param_Out_Points,Z_Param_Size,Z_Param_CameraRotation,Z_Param_FovXDegrees,Z_Param_AspectRatio,Z_Param_FovLeftMargin,Z_Param_FovRightMargin,Z_Param_FovBottomMargin,Z_Param_FovTopMargin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayCamera::execGetMinProjection)
	{
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinProjection(Z_Param_Normal,Z_Param_Out_Points,Z_Param_Size);
		P_NATIVE_END;
	}
	static FName NAME_AGameplayCamera_RequestSkipInterpolation = FName(TEXT("RequestSkipInterpolation"));
	void AGameplayCamera::RequestSkipInterpolation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayCamera_RequestSkipInterpolation),NULL);
	}
	void AGameplayCamera::StaticRegisterNativesAGameplayCamera()
	{
		UClass* Class = AGameplayCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcCameraLocationByTargetPoints", &AGameplayCamera::execCalcCameraLocationByTargetPoints },
			{ "GetMinProjection", &AGameplayCamera::execGetMinProjection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics
	{
		struct GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms
		{
			TArray<FVector> Points;
			float Size;
			FRotator CameraRotation;
			float FovXDegrees;
			float AspectRatio;
			float FovLeftMargin;
			float FovRightMargin;
			float FovBottomMargin;
			float FovTopMargin;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FovXDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FovXDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FovLeftMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FovLeftMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FovRightMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FovRightMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FovBottomMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FovBottomMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FovTopMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FovTopMargin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, Size), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_CameraRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_CameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_CameraRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovXDegrees_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovXDegrees = { "FovXDegrees", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, FovXDegrees), METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovXDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovXDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, AspectRatio), METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovLeftMargin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovLeftMargin = { "FovLeftMargin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, FovLeftMargin), METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovLeftMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovLeftMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovRightMargin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovRightMargin = { "FovRightMargin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, FovRightMargin), METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovRightMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovRightMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovBottomMargin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovBottomMargin = { "FovBottomMargin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, FovBottomMargin), METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovBottomMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovBottomMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovTopMargin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovTopMargin = { "FovTopMargin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, FovTopMargin), METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovTopMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovTopMargin_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_CameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovXDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_AspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovLeftMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovRightMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovBottomMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_FovTopMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCamera, nullptr, "CalcCameraLocationByTargetPoints", nullptr, nullptr, sizeof(GameplayCamera_eventCalcCameraLocationByTargetPoints_Parms), Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics
	{
		struct GameplayCamera_eventGetMinProjection_Parms
		{
			FVector Normal;
			TArray<FVector> Points;
			float Size;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventGetMinProjection_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventGetMinProjection_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventGetMinProjection_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCamera_eventGetMinProjection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCamera, nullptr, "GetMinProjection", nullptr, nullptr, sizeof(GameplayCamera_eventGetMinProjection_Parms), Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayCamera_GetMinProjection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayCamera_GetMinProjection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayCamera_RequestSkipInterpolation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCamera_RequestSkipInterpolation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCamera_RequestSkipInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCamera, nullptr, "RequestSkipInterpolation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCamera_RequestSkipInterpolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCamera_RequestSkipInterpolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayCamera_RequestSkipInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayCamera_RequestSkipInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameplayCamera_NoRegister()
	{
		return AGameplayCamera::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayCamera_CalcCameraLocationByTargetPoints, "CalcCameraLocationByTargetPoints" }, // 3150249855
		{ &Z_Construct_UFunction_AGameplayCamera_GetMinProjection, "GetMinProjection" }, // 1466805128
		{ &Z_Construct_UFunction_AGameplayCamera_RequestSkipInterpolation, "RequestSkipInterpolation" }, // 1268346239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameplayCamera_Statics::ClassParams = {
		&AGameplayCamera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameplayCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameplayCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayCamera, 3800728909);
	template<> ELITE_GAME_API UClass* StaticClass<AGameplayCamera>()
	{
		return AGameplayCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayCamera(Z_Construct_UClass_AGameplayCamera, &AGameplayCamera::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("AGameplayCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
