// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSMapAreaVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSMapAreaVolume() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMapAreaVolume_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMapAreaVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo();
// End Cross Module References
	DEFINE_FUNCTION(AELSSMapAreaVolume::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_inOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_inOtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMapAreaVolume::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_inOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_inOtherActor);
		P_NATIVE_END;
	}
	void AELSSMapAreaVolume::StaticRegisterNativesAELSSMapAreaVolume()
	{
		UClass* Class = AELSSMapAreaVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AELSSMapAreaVolume::execOnBeginOverlap },
			{ "OnEndOverlap", &AELSSMapAreaVolume::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics
	{
		struct ELSSMapAreaVolume_eventOnBeginOverlap_Parms
		{
			AActor* inOtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inOtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::NewProp_inOtherActor = { "inOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMapAreaVolume_eventOnBeginOverlap_Parms, inOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::NewProp_inOtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMapAreaVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMapAreaVolume, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(ELSSMapAreaVolume_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics
	{
		struct ELSSMapAreaVolume_eventOnEndOverlap_Parms
		{
			AActor* inOtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inOtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::NewProp_inOtherActor = { "inOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMapAreaVolume_eventOnEndOverlap_Parms, inOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::NewProp_inOtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMapAreaVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMapAreaVolume, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(ELSSMapAreaVolume_eventOnEndOverlap_Parms), Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSMapAreaVolume_NoRegister()
	{
		return AELSSMapAreaVolume::StaticClass();
	}
	struct Z_Construct_UClass_AELSSMapAreaVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AreaInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCameraCorrect_MetaData[];
#endif
		static void NewProp_UseCameraCorrect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCameraCorrect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCorrectInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraCorrectInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSMapAreaVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSMapAreaVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSMapAreaVolume_OnBeginOverlap, "OnBeginOverlap" }, // 2731368013
		{ &Z_Construct_UFunction_AELSSMapAreaVolume_OnEndOverlap, "OnEndOverlap" }, // 2973487195
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMapAreaVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSMapAreaVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSMapAreaVolume.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_AreaInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMapAreaVolume" },
		{ "ModuleRelativePath", "Public/ELSSMapAreaVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_AreaInfo = { "AreaInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSMapAreaVolume, AreaInfo), Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_AreaInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_AreaInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_UseCameraCorrect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMapAreaVolume" },
		{ "ModuleRelativePath", "Public/ELSSMapAreaVolume.h" },
	};
#endif
	void Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_UseCameraCorrect_SetBit(void* Obj)
	{
		((AELSSMapAreaVolume*)Obj)->UseCameraCorrect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_UseCameraCorrect = { "UseCameraCorrect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSMapAreaVolume), &Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_UseCameraCorrect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_UseCameraCorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_UseCameraCorrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_CameraCorrectInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMapAreaVolume" },
		{ "ModuleRelativePath", "Public/ELSSMapAreaVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_CameraCorrectInfo = { "CameraCorrectInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSMapAreaVolume, CameraCorrectInfo), Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_CameraCorrectInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_CameraCorrectInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSMapAreaVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_AreaInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_UseCameraCorrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMapAreaVolume_Statics::NewProp_CameraCorrectInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSMapAreaVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSMapAreaVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSMapAreaVolume_Statics::ClassParams = {
		&AELSSMapAreaVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSMapAreaVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMapAreaVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSMapAreaVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMapAreaVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSMapAreaVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSMapAreaVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSMapAreaVolume, 1002709482);
	template<> ABP_200508_API UClass* StaticClass<AELSSMapAreaVolume>()
	{
		return AELSSMapAreaVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSMapAreaVolume(Z_Construct_UClass_AELSSMapAreaVolume, &AELSSMapAreaVolume::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSMapAreaVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSMapAreaVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
