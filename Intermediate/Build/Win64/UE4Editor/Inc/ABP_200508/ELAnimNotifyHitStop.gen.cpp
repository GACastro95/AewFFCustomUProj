// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAnimNotifyHitStop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifyHitStop() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyHitStop_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyHitStop();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimNotifyHitStop::execGetMainAnimCharacter_N)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELCharacter_Native**)Z_Param__Result=P_THIS->GetMainAnimCharacter_N(Z_Param_MeshComp,Z_Param_Animation);
		P_NATIVE_END;
	}
	void UELAnimNotifyHitStop::StaticRegisterNativesUELAnimNotifyHitStop()
	{
		UClass* Class = UELAnimNotifyHitStop::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainAnimCharacter_N", &UELAnimNotifyHitStop::execGetMainAnimCharacter_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics
	{
		struct ELAnimNotifyHitStop_eventGetMainAnimCharacter_N_Parms
		{
			USkeletalMeshComponent* MeshComp;
			UAnimSequenceBase* Animation;
			AELCharacter_Native* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotifyHitStop_eventGetMainAnimCharacter_N_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotifyHitStop_eventGetMainAnimCharacter_N_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotifyHitStop_eventGetMainAnimCharacter_N_Parms, ReturnValue), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimNotifyHitStop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimNotifyHitStop, nullptr, "GetMainAnimCharacter_N", nullptr, nullptr, sizeof(ELAnimNotifyHitStop_eventGetMainAnimCharacter_N_Parms), Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimNotifyHitStop_NoRegister()
	{
		return UELAnimNotifyHitStop::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifyHitStop_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifyHitStop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimNotifyHitStop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimNotifyHitStop_GetMainAnimCharacter_N, "GetMainAnimCharacter_N" }, // 581780135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyHitStop_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifyHitStop.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyHitStop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifyHitStop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifyHitStop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifyHitStop_Statics::ClassParams = {
		&UELAnimNotifyHitStop::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyHitStop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyHitStop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifyHitStop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifyHitStop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifyHitStop, 301973474);
	template<> ABP_200508_API UClass* StaticClass<UELAnimNotifyHitStop>()
	{
		return UELAnimNotifyHitStop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifyHitStop(Z_Construct_UClass_UELAnimNotifyHitStop, &UELAnimNotifyHitStop::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAnimNotifyHitStop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifyHitStop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
