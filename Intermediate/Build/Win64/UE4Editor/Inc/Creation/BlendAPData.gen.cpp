// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BlendAPData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendAPData() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UBlendAPData_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UBlendAPData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBodyMorphParam();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSocketParam();
// End Cross Module References
	DEFINE_FUNCTION(UBlendAPData::execApplyBlendAPData)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Slim);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Heavy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Muscular);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyBlendAPData(Z_Param_MeshComp,Z_Param_Slim,Z_Param_Heavy,Z_Param_Muscular);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlendAPData::execRebuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rebuild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlendAPData::execTryGetBlendAPData)
	{
		P_GET_OBJECT_REF(UBlendAPData,Z_Param_Out_BlendAPData);
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlendAPData::TryGetBlendAPData(Z_Param_Out_BlendAPData,Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlendAPData::execTryGetBlendedAPSocketTransform)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_STRUCT_REF(FBodyMorphParam,Z_Param_Out_MorphParam);
		P_GET_PROPERTY(FByteProperty,Z_Param_TransformSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UBlendAPData::TryGetBlendedAPSocketTransform(Z_Param_MeshComp,Z_Param_SocketName,Z_Param_Out_MorphParam,ERelativeTransformSpace(Z_Param_TransformSpace));
		P_NATIVE_END;
	}
	void UBlendAPData::StaticRegisterNativesUBlendAPData()
	{
		UClass* Class = UBlendAPData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyBlendAPData", &UBlendAPData::execApplyBlendAPData },
			{ "Rebuild", &UBlendAPData::execRebuild },
			{ "TryGetBlendAPData", &UBlendAPData::execTryGetBlendAPData },
			{ "TryGetBlendedAPSocketTransform", &UBlendAPData::execTryGetBlendedAPSocketTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics
	{
		struct BlendAPData_eventApplyBlendAPData_Parms
		{
			USkeletalMeshComponent* MeshComp;
			float Slim;
			float Heavy;
			float Muscular;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Slim;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Heavy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Muscular;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventApplyBlendAPData_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_Slim = { "Slim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventApplyBlendAPData_Parms, Slim), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_Heavy = { "Heavy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventApplyBlendAPData_Parms, Heavy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_Muscular = { "Muscular", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventApplyBlendAPData_Parms, Muscular), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_Slim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_Heavy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::NewProp_Muscular,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlendAPData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendAPData, nullptr, "ApplyBlendAPData", nullptr, nullptr, sizeof(BlendAPData_eventApplyBlendAPData_Parms), Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlendAPData_Rebuild_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_Rebuild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlendAPData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendAPData_Rebuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendAPData, nullptr, "Rebuild", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_Rebuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_Rebuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendAPData_Rebuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlendAPData_Rebuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics
	{
		struct BlendAPData_eventTryGetBlendAPData_Parms
		{
			UBlendAPData* BlendAPData;
			USkeletalMesh* Mesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendAPData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendAPData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::NewProp_BlendAPData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::NewProp_BlendAPData = { "BlendAPData", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventTryGetBlendAPData_Parms, BlendAPData), Z_Construct_UClass_UBlendAPData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::NewProp_BlendAPData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::NewProp_BlendAPData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventTryGetBlendAPData_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::NewProp_BlendAPData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlendAPData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendAPData, nullptr, "TryGetBlendAPData", nullptr, nullptr, sizeof(BlendAPData_eventTryGetBlendAPData_Parms), Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics
	{
		struct BlendAPData_eventTryGetBlendedAPSocketTransform_Parms
		{
			USkeletalMeshComponent* MeshComp;
			FName SocketName;
			FBodyMorphParam MorphParam;
			TEnumAsByte<ERelativeTransformSpace> TransformSpace;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MorphParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventTryGetBlendedAPSocketTransform_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventTryGetBlendedAPSocketTransform_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MorphParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MorphParam = { "MorphParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventTryGetBlendedAPSocketTransform_Parms, MorphParam), Z_Construct_UScriptStruct_FBodyMorphParam, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MorphParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MorphParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_TransformSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventTryGetBlendedAPSocketTransform_Parms, TransformSpace), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_TransformSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_TransformSpace_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlendAPData_eventTryGetBlendedAPSocketTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_MorphParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_TransformSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlendAPData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendAPData, nullptr, "TryGetBlendedAPSocketTransform", nullptr, nullptr, sizeof(BlendAPData_eventTryGetBlendedAPSocketTransform_Parms), Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlendAPData_NoRegister()
	{
		return UBlendAPData::StaticClass();
	}
	struct Z_Construct_UClass_UBlendAPData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachSocketOffset_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketOffset_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AttachSocketOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendAPData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlendAPData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlendAPData_ApplyBlendAPData, "ApplyBlendAPData" }, // 2904612296
		{ &Z_Construct_UFunction_UBlendAPData_Rebuild, "Rebuild" }, // 1619589884
		{ &Z_Construct_UFunction_UBlendAPData_TryGetBlendAPData, "TryGetBlendAPData" }, // 725095104
		{ &Z_Construct_UFunction_UBlendAPData_TryGetBlendedAPSocketTransform, "TryGetBlendedAPSocketTransform" }, // 654384753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendAPData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlendAPData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlendAPData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset_ValueProp = { "AttachSocketOffset", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBlendSocketParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset_Key_KeyProp = { "AttachSocketOffset_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlendAPData" },
		{ "ModuleRelativePath", "Public/BlendAPData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset = { "AttachSocketOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendAPData, AttachSocketOffset), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendAPData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendAPData_Statics::NewProp_AttachSocketOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendAPData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendAPData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlendAPData_Statics::ClassParams = {
		&UBlendAPData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlendAPData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlendAPData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendAPData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendAPData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendAPData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlendAPData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlendAPData, 1961160690);
	template<> CREATION_API UClass* StaticClass<UBlendAPData>()
	{
		return UBlendAPData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendAPData(Z_Construct_UClass_UBlendAPData, &UBlendAPData::StaticClass, TEXT("/Script/Creation"), TEXT("UBlendAPData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendAPData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
