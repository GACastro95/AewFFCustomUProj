// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAnimInstance_PartIK.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimInstance_PartIK() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimInstance_PartIK_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimInstance_PartIK();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimInstance_IK();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELIKPartType();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimInstance_PartIK::execStartIK)
	{
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_GET_PROPERTY(FIntProperty,Z_Param_CastID);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetBone);
		P_GET_PROPERTY(FNameProperty,Z_Param_BaseBone);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartIK(EELIKPartType(Z_Param_PartType),Z_Param_CastID,Z_Param_TargetBone,Z_Param_BaseBone,Z_Param_BlendTime);
		P_NATIVE_END;
	}
	void UELAnimInstance_PartIK::StaticRegisterNativesUELAnimInstance_PartIK()
	{
		UClass* Class = UELAnimInstance_PartIK::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartIK", &UELAnimInstance_PartIK::execStartIK },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics
	{
		struct ELAnimInstance_PartIK_eventStartIK_Parms
		{
			EELIKPartType PartType;
			int32 CastID;
			FName TargetBone;
			FName BaseBone;
			float BlendTime;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CastID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetBone;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BaseBone;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_PartIK_eventStartIK_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_CastID = { "CastID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_PartIK_eventStartIK_Parms, CastID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_PartIK_eventStartIK_Parms, TargetBone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_BaseBone = { "BaseBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_PartIK_eventStartIK_Parms, BaseBone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_PartIK_eventStartIK_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_PartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_CastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_TargetBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_BaseBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::NewProp_BlendTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_PartIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_PartIK, nullptr, "StartIK", nullptr, nullptr, sizeof(ELAnimInstance_PartIK_eventStartIK_Parms), Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimInstance_PartIK_NoRegister()
	{
		return UELAnimInstance_PartIK::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimInstance_PartIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimInstance_PartIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimInstance_IK,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimInstance_PartIK_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimInstance_PartIK_StartIK, "StartIK" }, // 417086548
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_PartIK_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELAnimInstance_PartIK.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_PartIK.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimInstance_PartIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimInstance_PartIK>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimInstance_PartIK_Statics::ClassParams = {
		&UELAnimInstance_PartIK::StaticClass,
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
		0x009000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_PartIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_PartIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimInstance_PartIK()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimInstance_PartIK_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimInstance_PartIK, 5814343);
	template<> ABP_200508_API UClass* StaticClass<UELAnimInstance_PartIK>()
	{
		return UELAnimInstance_PartIK::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimInstance_PartIK(Z_Construct_UClass_UELAnimInstance_PartIK, &UELAnimInstance_PartIK::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAnimInstance_PartIK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimInstance_PartIK);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
