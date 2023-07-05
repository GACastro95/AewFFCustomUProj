// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimInstance() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELAnimInstance_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimInstance::execGetSocketTransform_N)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_PROPERTY(FByteProperty,Z_Param_TransformSpace);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSocketTransform_N(Z_Param_Character,Z_Param_SocketName,ERelativeTransformSpace(Z_Param_TransformSpace),Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	void UELAnimInstance::StaticRegisterNativesUELAnimInstance()
	{
		UClass* Class = UELAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSocketTransform_N", &UELAnimInstance::execGetSocketTransform_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics
	{
		struct ELAnimInstance_eventGetSocketTransform_N_Parms
		{
			const ACharacter* Character;
			FName SocketName;
			TEnumAsByte<ERelativeTransformSpace> TransformSpace;
			FTransform Transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_eventGetSocketTransform_N_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_eventGetSocketTransform_N_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_TransformSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_eventGetSocketTransform_N_Parms, TransformSpace), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_TransformSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_TransformSpace_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_eventGetSocketTransform_N_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_TransformSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance, nullptr, "GetSocketTransform_N", nullptr, nullptr, sizeof(ELAnimInstance_eventGetSocketTransform_N_Parms), Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimInstance_NoRegister()
	{
		return UELAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimInstance_GetSocketTransform_N, "GetSocketTransform_N" }, // 131348733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimInstance_Statics::ClassParams = {
		&UELAnimInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimInstance, 4104182428);
	template<> ELITE_CORE_API UClass* StaticClass<UELAnimInstance>()
	{
		return UELAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimInstance(Z_Construct_UClass_UELAnimInstance, &UELAnimInstance::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
