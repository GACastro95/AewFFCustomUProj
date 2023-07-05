// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActionArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActionArea() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSActionArea_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSActionArea();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSActionArea::execCheck)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_userTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_GET_UBOOL(Z_Param_inEnableRemainStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Check(Z_Param_Out_userTransform,Z_Param_Out_TargetLocation,Z_Param_inEnableRemainStep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSActionArea::execIsEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSActionArea::execSetEnable)
	{
		P_GET_UBOOL(Z_Param_inEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnable(Z_Param_inEnable);
		P_NATIVE_END;
	}
	void AELSSActionArea::StaticRegisterNativesAELSSActionArea()
	{
		UClass* Class = AELSSActionArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Check", &AELSSActionArea::execCheck },
			{ "IsEnable", &AELSSActionArea::execIsEnable },
			{ "SetEnable", &AELSSActionArea::execSetEnable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSActionArea_Check_Statics
	{
		struct ELSSActionArea_eventCheck_Parms
		{
			FTransform userTransform;
			FVector TargetLocation;
			bool inEnableRemainStep;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_userTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static void NewProp_inEnableRemainStep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEnableRemainStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_userTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_userTransform = { "userTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionArea_eventCheck_Parms, userTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_userTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_userTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionArea_eventCheck_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_TargetLocation_MetaData)) };
	void Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_inEnableRemainStep_SetBit(void* Obj)
	{
		((ELSSActionArea_eventCheck_Parms*)Obj)->inEnableRemainStep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_inEnableRemainStep = { "inEnableRemainStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionArea_eventCheck_Parms), &Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_inEnableRemainStep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSActionArea_Check_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_userTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSActionArea_Check_Statics::NewProp_inEnableRemainStep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSActionArea_Check_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSActionArea_Check_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSActionArea, nullptr, "Check", nullptr, nullptr, sizeof(ELSSActionArea_eventCheck_Parms), Z_Construct_UFunction_AELSSActionArea_Check_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSActionArea_Check_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSActionArea_Check_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSActionArea_Check_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSActionArea_Check()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSActionArea_Check_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics
	{
		struct ELSSActionArea_eventIsEnable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionArea_eventIsEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionArea_eventIsEnable_Parms), &Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSActionArea, nullptr, "IsEnable", nullptr, nullptr, sizeof(ELSSActionArea_eventIsEnable_Parms), Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSActionArea_IsEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSActionArea_IsEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics
	{
		struct ELSSActionArea_eventSetEnable_Parms
		{
			bool inEnable;
		};
		static void NewProp_inEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::NewProp_inEnable_SetBit(void* Obj)
	{
		((ELSSActionArea_eventSetEnable_Parms*)Obj)->inEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::NewProp_inEnable = { "inEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionArea_eventSetEnable_Parms), &Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::NewProp_inEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::NewProp_inEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSActionArea, nullptr, "SetEnable", nullptr, nullptr, sizeof(ELSSActionArea_eventSetEnable_Parms), Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSActionArea_SetEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSActionArea_SetEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSActionArea_NoRegister()
	{
		return AELSSActionArea::StaticClass();
	}
	struct Z_Construct_UClass_AELSSActionArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSActionArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSActionArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSActionArea_Check, "Check" }, // 281781688
		{ &Z_Construct_UFunction_AELSSActionArea_IsEnable, "IsEnable" }, // 207440833
		{ &Z_Construct_UFunction_AELSSActionArea_SetEnable, "SetEnable" }, // 3069641495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSActionArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSActionArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionArea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSActionArea_Statics::NewProp_AreaCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSActionArea_Statics::NewProp_AreaCollision = { "AreaCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSActionArea, AreaCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSActionArea_Statics::NewProp_AreaCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSActionArea_Statics::NewProp_AreaCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSActionArea_Statics::NewProp_Enabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionArea" },
		{ "ModuleRelativePath", "Public/ELSSActionArea.h" },
	};
#endif
	void Z_Construct_UClass_AELSSActionArea_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((AELSSActionArea*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSActionArea_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSActionArea), &Z_Construct_UClass_AELSSActionArea_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSActionArea_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSActionArea_Statics::NewProp_Enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSActionArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSActionArea_Statics::NewProp_AreaCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSActionArea_Statics::NewProp_Enabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSActionArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSActionArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSActionArea_Statics::ClassParams = {
		&AELSSActionArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSActionArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSActionArea_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSActionArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSActionArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSActionArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSActionArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSActionArea, 1700263380);
	template<> ABP_200508_API UClass* StaticClass<AELSSActionArea>()
	{
		return AELSSActionArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSActionArea(Z_Construct_UClass_AELSSActionArea, &AELSSActionArea::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSActionArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSActionArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
