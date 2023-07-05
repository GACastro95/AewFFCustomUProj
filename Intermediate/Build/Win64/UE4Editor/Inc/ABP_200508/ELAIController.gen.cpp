// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAIController() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELAIController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EBehaviorTreeType();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELAIController::execSwitchAIController_N)
	{
		P_GET_ENUM(EBehaviorTreeType,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchAIController_N(EBehaviorTreeType(Z_Param_NewType));
		P_NATIVE_END;
	}
	void AELAIController::StaticRegisterNativesAELAIController()
	{
		UClass* Class = AELAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchAIController_N", &AELAIController::execSwitchAIController_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics
	{
		struct ELAIController_eventSwitchAIController_N_Parms
		{
			EBehaviorTreeType NewType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::NewProp_NewType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAIController_eventSwitchAIController_N_Parms, NewType), Z_Construct_UEnum_ABP_200508_EBehaviorTreeType, METADATA_PARAMS(Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::NewProp_NewType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::NewProp_NewType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::NewProp_NewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::NewProp_NewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELAIController, nullptr, "SwitchAIController_N", nullptr, nullptr, sizeof(ELAIController_eventSwitchAIController_N_Parms), Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELAIController_SwitchAIController_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELAIController_SwitchAIController_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELAIController_NoRegister()
	{
		return AELAIController::StaticClass();
	}
	struct Z_Construct_UClass_AELAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BehaviorTreeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrainingMode_N_MetaData[];
#endif
		static void NewProp_bTrainingMode_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrainingMode_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELAIController_SwitchAIController_N, "SwitchAIController_N" }, // 1986669801
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAIController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELAIController_Statics::NewProp_BehaviorTreeArray_Inner = { "BehaviorTreeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAIController_Statics::NewProp_BehaviorTreeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAIController" },
		{ "ModuleRelativePath", "Public/ELAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELAIController_Statics::NewProp_BehaviorTreeArray = { "BehaviorTreeArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAIController, BehaviorTreeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELAIController_Statics::NewProp_BehaviorTreeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAIController_Statics::NewProp_BehaviorTreeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAIController_Statics::NewProp_bTrainingMode_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAIController" },
		{ "ModuleRelativePath", "Public/ELAIController.h" },
	};
#endif
	void Z_Construct_UClass_AELAIController_Statics::NewProp_bTrainingMode_N_SetBit(void* Obj)
	{
		((AELAIController*)Obj)->bTrainingMode_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELAIController_Statics::NewProp_bTrainingMode_N = { "bTrainingMode_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELAIController), &Z_Construct_UClass_AELAIController_Statics::NewProp_bTrainingMode_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELAIController_Statics::NewProp_bTrainingMode_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAIController_Statics::NewProp_bTrainingMode_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAIController_Statics::NewProp_BehaviorTreeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAIController_Statics::NewProp_BehaviorTreeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAIController_Statics::NewProp_bTrainingMode_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELAIController_Statics::ClassParams = {
		&AELAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELAIController, 3535980310);
	template<> ABP_200508_API UClass* StaticClass<AELAIController>()
	{
		return AELAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELAIController(Z_Construct_UClass_AELAIController, &AELAIController::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
