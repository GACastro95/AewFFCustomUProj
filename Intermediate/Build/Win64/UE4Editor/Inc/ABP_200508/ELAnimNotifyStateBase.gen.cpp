// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAnimNotifyStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifyStateBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyStateBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyStateBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimNotifyStateBase::execGetMainAnimCharacter_N)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELCharacter_Native**)Z_Param__Result=P_THIS->GetMainAnimCharacter_N(Z_Param_MeshComp,Z_Param_Animation);
		P_NATIVE_END;
	}
	void UELAnimNotifyStateBase::StaticRegisterNativesUELAnimNotifyStateBase()
	{
		UClass* Class = UELAnimNotifyStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainAnimCharacter_N", &UELAnimNotifyStateBase::execGetMainAnimCharacter_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics
	{
		struct ELAnimNotifyStateBase_eventGetMainAnimCharacter_N_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotifyStateBase_eventGetMainAnimCharacter_N_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotifyStateBase_eventGetMainAnimCharacter_N_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotifyStateBase_eventGetMainAnimCharacter_N_Parms, ReturnValue), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimNotifyStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimNotifyStateBase, nullptr, "GetMainAnimCharacter_N", nullptr, nullptr, sizeof(ELAnimNotifyStateBase_eventGetMainAnimCharacter_N_Parms), Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimNotifyStateBase_NoRegister()
	{
		return UELAnimNotifyStateBase::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifyStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifyStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimNotifyStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimNotifyStateBase_GetMainAnimCharacter_N, "GetMainAnimCharacter_N" }, // 339301954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifyStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyStateBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifyStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifyStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifyStateBase_Statics::ClassParams = {
		&UELAnimNotifyStateBase::StaticClass,
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
		0x001130A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifyStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifyStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifyStateBase, 1937878911);
	template<> ABP_200508_API UClass* StaticClass<UELAnimNotifyStateBase>()
	{
		return UELAnimNotifyStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifyStateBase(Z_Construct_UClass_UELAnimNotifyStateBase, &UELAnimNotifyStateBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAnimNotifyStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifyStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
