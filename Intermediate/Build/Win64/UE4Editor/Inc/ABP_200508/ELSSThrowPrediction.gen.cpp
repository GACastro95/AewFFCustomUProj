// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSThrowPrediction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSThrowPrediction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSThrowPrediction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSThrowPrediction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSThrowPredictionType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSThrowPrediction::execSetRadiusAndUnderCheckHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadiusAndUnderCheckHeight(Z_Param_inRadius,Z_Param_inHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSThrowPrediction::execUpdatePrediction_Native)
	{
		P_GET_STRUCT_REF(FPredictProjectilePathResult,Z_Param_Out_InParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePrediction_Native(Z_Param_Out_InParam);
		P_NATIVE_END;
	}
	static FName NAME_AELSSThrowPrediction_ApplyRadiusToMesh = FName(TEXT("ApplyRadiusToMesh"));
	void AELSSThrowPrediction::ApplyRadiusToMesh(float inRadius)
	{
		ELSSThrowPrediction_eventApplyRadiusToMesh_Parms Parms;
		Parms.inRadius=inRadius;
		ProcessEvent(FindFunctionChecked(NAME_AELSSThrowPrediction_ApplyRadiusToMesh),&Parms);
	}
	static FName NAME_AELSSThrowPrediction_BeginPrediction = FName(TEXT("BeginPrediction"));
	void AELSSThrowPrediction::BeginPrediction(ESSThrowPredictionType InType)
	{
		ELSSThrowPrediction_eventBeginPrediction_Parms Parms;
		Parms.InType=InType;
		ProcessEvent(FindFunctionChecked(NAME_AELSSThrowPrediction_BeginPrediction),&Parms);
	}
	static FName NAME_AELSSThrowPrediction_EndPrediction = FName(TEXT("EndPrediction"));
	void AELSSThrowPrediction::EndPrediction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSThrowPrediction_EndPrediction),NULL);
	}
	static FName NAME_AELSSThrowPrediction_SetEffectCircle = FName(TEXT("SetEffectCircle"));
	void AELSSThrowPrediction::SetEffectCircle(FVector const& InLoc, float inRadius, bool inOnlyFloor)
	{
		ELSSThrowPrediction_eventSetEffectCircle_Parms Parms;
		Parms.InLoc=InLoc;
		Parms.inRadius=inRadius;
		Parms.inOnlyFloor=inOnlyFloor ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSThrowPrediction_SetEffectCircle),&Parms);
	}
	static FName NAME_AELSSThrowPrediction_UpdatePrediction = FName(TEXT("UpdatePrediction"));
	void AELSSThrowPrediction::UpdatePrediction(FPredictProjectilePathResult const& InParam)
	{
		ELSSThrowPrediction_eventUpdatePrediction_Parms Parms;
		Parms.InParam=InParam;
		ProcessEvent(FindFunctionChecked(NAME_AELSSThrowPrediction_UpdatePrediction),&Parms);
	}
	void AELSSThrowPrediction::StaticRegisterNativesAELSSThrowPrediction()
	{
		UClass* Class = AELSSThrowPrediction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRadiusAndUnderCheckHeight", &AELSSThrowPrediction::execSetRadiusAndUnderCheckHeight },
			{ "UpdatePrediction_Native", &AELSSThrowPrediction::execUpdatePrediction_Native },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::NewProp_inRadius = { "inRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSThrowPrediction_eventApplyRadiusToMesh_Parms, inRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::NewProp_inRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSThrowPrediction, nullptr, "ApplyRadiusToMesh", nullptr, nullptr, sizeof(ELSSThrowPrediction_eventApplyRadiusToMesh_Parms), Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSThrowPrediction_eventBeginPrediction_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSThrowPredictionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSThrowPrediction, nullptr, "BeginPrediction", nullptr, nullptr, sizeof(ELSSThrowPrediction_eventBeginPrediction_Parms), Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSThrowPrediction_EndPrediction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_EndPrediction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSThrowPrediction_EndPrediction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSThrowPrediction, nullptr, "EndPrediction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_EndPrediction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_EndPrediction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSThrowPrediction_EndPrediction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSThrowPrediction_EndPrediction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inRadius;
		static void NewProp_inOnlyFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inOnlyFloor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_InLoc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_InLoc = { "InLoc", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSThrowPrediction_eventSetEffectCircle_Parms, InLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_InLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_InLoc_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_inRadius = { "inRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSThrowPrediction_eventSetEffectCircle_Parms, inRadius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_inOnlyFloor_SetBit(void* Obj)
	{
		((ELSSThrowPrediction_eventSetEffectCircle_Parms*)Obj)->inOnlyFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_inOnlyFloor = { "inOnlyFloor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSThrowPrediction_eventSetEffectCircle_Parms), &Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_inOnlyFloor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_InLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_inRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::NewProp_inOnlyFloor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSThrowPrediction, nullptr, "SetEffectCircle", nullptr, nullptr, sizeof(ELSSThrowPrediction_eventSetEffectCircle_Parms), Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics
	{
		struct ELSSThrowPrediction_eventSetRadiusAndUnderCheckHeight_Parms
		{
			float inRadius;
			float inHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::NewProp_inRadius = { "inRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSThrowPrediction_eventSetRadiusAndUnderCheckHeight_Parms, inRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::NewProp_inHeight = { "inHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSThrowPrediction_eventSetRadiusAndUnderCheckHeight_Parms, inHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::NewProp_inRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::NewProp_inHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSThrowPrediction, nullptr, "SetRadiusAndUnderCheckHeight", nullptr, nullptr, sizeof(ELSSThrowPrediction_eventSetRadiusAndUnderCheckHeight_Parms), Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSThrowPrediction_eventUpdatePrediction_Parms, InParam), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::NewProp_InParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::NewProp_InParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSThrowPrediction, nullptr, "UpdatePrediction", nullptr, nullptr, sizeof(ELSSThrowPrediction_eventUpdatePrediction_Parms), Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics
	{
		struct ELSSThrowPrediction_eventUpdatePrediction_Native_Parms
		{
			FPredictProjectilePathResult InParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSThrowPrediction_eventUpdatePrediction_Native_Parms, InParam), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::NewProp_InParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::NewProp_InParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSThrowPrediction, nullptr, "UpdatePrediction_Native", nullptr, nullptr, sizeof(ELSSThrowPrediction_eventUpdatePrediction_Native_Parms), Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSThrowPrediction_NoRegister()
	{
		return AELSSThrowPrediction::StaticClass();
	}
	struct Z_Construct_UClass_AELSSThrowPrediction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderCheckHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnderCheckHeight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CircleEffect;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSThrowPrediction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSThrowPrediction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSThrowPrediction_ApplyRadiusToMesh, "ApplyRadiusToMesh" }, // 742528035
		{ &Z_Construct_UFunction_AELSSThrowPrediction_BeginPrediction, "BeginPrediction" }, // 2201275731
		{ &Z_Construct_UFunction_AELSSThrowPrediction_EndPrediction, "EndPrediction" }, // 2524646573
		{ &Z_Construct_UFunction_AELSSThrowPrediction_SetEffectCircle, "SetEffectCircle" }, // 2597575215
		{ &Z_Construct_UFunction_AELSSThrowPrediction_SetRadiusAndUnderCheckHeight, "SetRadiusAndUnderCheckHeight" }, // 2173602842
		{ &Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction, "UpdatePrediction" }, // 1430089756
		{ &Z_Construct_UFunction_AELSSThrowPrediction_UpdatePrediction_Native, "UpdatePrediction_Native" }, // 334217360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSThrowPrediction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSThrowPrediction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSThrowPrediction" },
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSThrowPrediction, CircleRadius), METADATA_PARAMS(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_UnderCheckHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSThrowPrediction" },
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_UnderCheckHeight = { "UnderCheckHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSThrowPrediction, UnderCheckHeight), METADATA_PARAMS(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_UnderCheckHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_UnderCheckHeight_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSThrowPrediction" },
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSThrowPrediction, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSThrowPrediction" },
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleEffect = { "CircleEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSThrowPrediction, CircleEffect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleEffect_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSThrowPrediction" },
		{ "ModuleRelativePath", "Public/ELSSThrowPrediction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSThrowPrediction, Type), Z_Construct_UEnum_ABP_200508_ESSThrowPredictionType, METADATA_PARAMS(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSThrowPrediction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_UnderCheckHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_CircleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSThrowPrediction_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSThrowPrediction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSThrowPrediction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSThrowPrediction_Statics::ClassParams = {
		&AELSSThrowPrediction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSThrowPrediction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSThrowPrediction_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSThrowPrediction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSThrowPrediction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSThrowPrediction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSThrowPrediction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSThrowPrediction, 228238692);
	template<> ABP_200508_API UClass* StaticClass<AELSSThrowPrediction>()
	{
		return AELSSThrowPrediction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSThrowPrediction(Z_Construct_UClass_AELSSThrowPrediction, &AELSSThrowPrediction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSThrowPrediction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSThrowPrediction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
