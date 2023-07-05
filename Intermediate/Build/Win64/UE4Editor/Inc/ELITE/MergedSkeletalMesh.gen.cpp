// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/MergedSkeletalMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMergedSkeletalMesh() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UMergedSkeletalMesh_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UMergedSkeletalMesh();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMergedSkeletalMesh::execMergeMeshes)
	{
		P_GET_STRUCT_REF(FSkeletalMeshMergeParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UMergedSkeletalMesh::MergeMeshes(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	void UMergedSkeletalMesh::StaticRegisterNativesUMergedSkeletalMesh()
	{
		UClass* Class = UMergedSkeletalMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MergeMeshes", &UMergedSkeletalMesh::execMergeMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics
	{
		struct MergedSkeletalMesh_eventMergeMeshes_Parms
		{
			FSkeletalMeshMergeParams Params;
			USkeletalMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergedSkeletalMesh_eventMergeMeshes_Parms, Params), Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, METADATA_PARAMS(Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergedSkeletalMesh_eventMergeMeshes_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MergedSkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMergedSkeletalMesh, nullptr, "MergeMeshes", nullptr, nullptr, sizeof(MergedSkeletalMesh_eventMergeMeshes_Parms), Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMergedSkeletalMesh_NoRegister()
	{
		return UMergedSkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UMergedSkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMergedSkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMergedSkeletalMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMergedSkeletalMesh_MergeMeshes, "MergeMeshes" }, // 3515946078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergedSkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MergedSkeletalMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MergedSkeletalMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMergedSkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMergedSkeletalMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMergedSkeletalMesh_Statics::ClassParams = {
		&UMergedSkeletalMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMergedSkeletalMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMergedSkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMergedSkeletalMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMergedSkeletalMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMergedSkeletalMesh, 1497475410);
	template<> ELITE_API UClass* StaticClass<UMergedSkeletalMesh>()
	{
		return UMergedSkeletalMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMergedSkeletalMesh(Z_Construct_UClass_UMergedSkeletalMesh, &UMergedSkeletalMesh::StaticClass, TEXT("/Script/ELITE"), TEXT("UMergedSkeletalMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMergedSkeletalMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
