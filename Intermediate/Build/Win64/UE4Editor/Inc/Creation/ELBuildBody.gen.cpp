// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELBuildBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBuildBody() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UELBuildBody_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UELBuildBody();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELCharacterComponent();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyType();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseBodyTypeParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditBodyParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyNodeParameter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELBuildBody::execGetBodyTypeParam)
	{
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_GET_ENUM(EBodyType,Z_Param_BodyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBaseBodyTypeParam*)Z_Param__Result=P_THIS->GetBodyTypeParam(EGender(Z_Param_Gender),EBodyType(Z_Param_BodyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBuildBody::execGetHeightRatio)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InBodyParamHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELBuildBody::GetHeightRatio(Z_Param_InBodyParamHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBuildBody::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBuildBody::execSetupBuildBody)
	{
		P_GET_STRUCT_REF(FEditBodyParam,Z_Param_Out_InParam);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_GET_UBOOL(Z_Param_bFootWearOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBuildBody(Z_Param_Out_InParam,EGender(Z_Param_Gender),Z_Param_bFootWearOffset);
		P_NATIVE_END;
	}
	void UELBuildBody::StaticRegisterNativesUELBuildBody()
	{
		UClass* Class = UELBuildBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBodyTypeParam", &UELBuildBody::execGetBodyTypeParam },
			{ "GetHeightRatio", &UELBuildBody::execGetHeightRatio },
			{ "Reset", &UELBuildBody::execReset },
			{ "SetupBuildBody", &UELBuildBody::execSetupBuildBody },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics
	{
		struct ELBuildBody_eventGetBodyTypeParam_Parms
		{
			EGender Gender;
			EBodyType BodyType;
			FBaseBodyTypeParam ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBuildBody_eventGetBodyTypeParam_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_BodyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBuildBody_eventGetBodyTypeParam_Parms, BodyType), Z_Construct_UEnum_ELITE_Game_EBodyType, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_BodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_BodyType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBuildBody_eventGetBodyTypeParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FBaseBodyTypeParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_BodyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_BodyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBuildBody, nullptr, "GetBodyTypeParam", nullptr, nullptr, sizeof(ELBuildBody_eventGetBodyTypeParam_Parms), Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics
	{
		struct ELBuildBody_eventGetHeightRatio_Parms
		{
			int32 InBodyParamHeight;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InBodyParamHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::NewProp_InBodyParamHeight = { "InBodyParamHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBuildBody_eventGetHeightRatio_Parms, InBodyParamHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBuildBody_eventGetHeightRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::NewProp_InBodyParamHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBuildBody, nullptr, "GetHeightRatio", nullptr, nullptr, sizeof(ELBuildBody_eventGetHeightRatio_Parms), Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBuildBody_GetHeightRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBuildBody_GetHeightRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBuildBody_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBuildBody_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBuildBody, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBuildBody_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBuildBody_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics
	{
		struct ELBuildBody_eventSetupBuildBody_Parms
		{
			FEditBodyParam InParam;
			EGender Gender;
			bool bFootWearOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFootWearOffset_MetaData[];
#endif
		static void NewProp_bFootWearOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFootWearOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBuildBody_eventSetupBuildBody_Parms, InParam), Z_Construct_UScriptStruct_FEditBodyParam, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_InParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBuildBody_eventSetupBuildBody_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_bFootWearOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_bFootWearOffset_SetBit(void* Obj)
	{
		((ELBuildBody_eventSetupBuildBody_Parms*)Obj)->bFootWearOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_bFootWearOffset = { "bFootWearOffset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBuildBody_eventSetupBuildBody_Parms), &Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_bFootWearOffset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_bFootWearOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_bFootWearOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_InParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::NewProp_bFootWearOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBuildBody, nullptr, "SetupBuildBody", nullptr, nullptr, sizeof(ELBuildBody_eventSetupBuildBody_Parms), Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBuildBody_SetupBuildBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBuildBody_SetupBuildBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELBuildBody_NoRegister()
	{
		return UELBuildBody::StaticClass();
	}
	struct Z_Construct_UClass_UELBuildBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixBone_MetaData[];
#endif
		static void NewProp_bFixBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine1Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine1Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine2Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine2Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChestNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElbowNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElbowNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KneeNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipNode_NoFootWear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipNode_NoFootWear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixRootNode_MetaData[];
#endif
		static void NewProp_bFixRootNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixRootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipCurve0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HipCurve0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipCurve1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HipCurve1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine1Curve0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spine1Curve0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine1Curve1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spine1Curve1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderCurve0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoulderCurve0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderCurve1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoulderCurve1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegCurve0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LegCurve0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegCurve1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LegCurve1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootWareOffset_Male_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootWareOffset_Male;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootWareOffset_Female_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootWareOffset_Female;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELBuildBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCharacterComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELBuildBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELBuildBody_GetBodyTypeParam, "GetBodyTypeParam" }, // 3161397663
		{ &Z_Construct_UFunction_UELBuildBody_GetHeightRatio, "GetHeightRatio" }, // 2961149745
		{ &Z_Construct_UFunction_UELBuildBody_Reset, "Reset" }, // 1945008858
		{ &Z_Construct_UFunction_UELBuildBody_SetupBuildBody, "SetupBuildBody" }, // 773769073
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELBuildBody.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	void Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixBone_SetBit(void* Obj)
	{
		((UELBuildBody*)Obj)->bFixBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixBone = { "bFixBone", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELBuildBody), &Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_MeshScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_MeshScale = { "MeshScale", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, MeshScale), METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_MeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_MeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode = { "HipNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, HipNode), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Node_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Node = { "Spine1Node", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, Spine1Node), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine2Node_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine2Node = { "Spine2Node", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, Spine2Node), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine2Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine2Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_ChestNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_ChestNode = { "ChestNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, ChestNode), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ChestNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ChestNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_NeckNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_NeckNode = { "NeckNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, NeckNode), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_NeckNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_NeckNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderNode = { "ShoulderNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, ShoulderNode), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_ElbowNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_ElbowNode = { "ElbowNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, ElbowNode), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ElbowNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ElbowNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegNode = { "LegNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, LegNode), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_KneeNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_KneeNode = { "KneeNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, KneeNode), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_KneeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_KneeNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode_NoFootWear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode_NoFootWear = { "HipNode_NoFootWear", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, HipNode_NoFootWear), Z_Construct_UScriptStruct_FBuildBodyNodeParameter, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode_NoFootWear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode_NoFootWear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixRootNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	void Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixRootNode_SetBit(void* Obj)
	{
		((UELBuildBody*)Obj)->bFixRootNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixRootNode = { "bFixRootNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELBuildBody), &Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixRootNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixRootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_UpdateDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_UpdateDate = { "UpdateDate", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, UpdateDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_UpdateDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_UpdateDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve0 = { "HipCurve0", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, HipCurve0), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve1 = { "HipCurve1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, HipCurve1), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve0 = { "Spine1Curve0", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, Spine1Curve0), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve1 = { "Spine1Curve1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, Spine1Curve1), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve0 = { "ShoulderCurve0", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, ShoulderCurve0), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve1 = { "ShoulderCurve1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, ShoulderCurve1), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve0 = { "LegCurve0", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, LegCurve0), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve1 = { "LegCurve1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, LegCurve1), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Male_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Male = { "FootWareOffset_Male", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, FootWareOffset_Male), METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Male_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Male_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Female_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBuildBody" },
		{ "ModuleRelativePath", "Public/ELBuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Female = { "FootWareOffset_Female", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBuildBody, FootWareOffset_Female), METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Female_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Female_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELBuildBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_MeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine2Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_ChestNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_NeckNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_ElbowNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_KneeNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipNode_NoFootWear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_bFixRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_UpdateDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_HipCurve1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_Spine1Curve1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_ShoulderCurve1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_LegCurve1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Male,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBuildBody_Statics::NewProp_FootWareOffset_Female,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELBuildBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELBuildBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELBuildBody_Statics::ClassParams = {
		&UELBuildBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELBuildBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELBuildBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELBuildBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELBuildBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELBuildBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELBuildBody, 170949961);
	template<> CREATION_API UClass* StaticClass<UELBuildBody>()
	{
		return UELBuildBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELBuildBody(Z_Construct_UClass_UELBuildBody, &UELBuildBody::StaticClass, TEXT("/Script/Creation"), TEXT("UELBuildBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELBuildBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
