// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotify_Effect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotify_Effect() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotify_Effect_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotify_Effect();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAnimNotify_Effect::execNotify)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Notify(Z_Param_MeshComp,Z_Param_Animation);
		P_NATIVE_END;
	}
	void UELSSAnimNotify_Effect::StaticRegisterNativesUELSSAnimNotify_Effect()
	{
		UClass* Class = UELSSAnimNotify_Effect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Notify", &UELSSAnimNotify_Effect::execNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics
	{
		struct ELSSAnimNotify_Effect_eventNotify_Parms
		{
			USkeletalMeshComponent* MeshComp;
			UAnimSequenceBase* Animation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotify_Effect_eventNotify_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotify_Effect_eventNotify_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimNotify_Effect, nullptr, "Notify", nullptr, nullptr, sizeof(ELSSAnimNotify_Effect_eventNotify_Parms), Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAnimNotify_Effect_NoRegister()
	{
		return UELSSAnimNotify_Effect::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotify_Effect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyHeatSkillScale_MetaData[];
#endif
		static void NewProp_ApplyHeatSkillScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyHeatSkillScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSAnimNotifyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAnimNotify_Effect_Notify, "Notify" }, // 3384034785
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotify_Effect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Effect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_EffectRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Effect" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_EffectRowName = { "EffectRowName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Effect, EffectRowName), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_EffectRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_EffectRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Effect" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Effect, SocketName), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Effect" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Effect, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_ApplyHeatSkillScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Effect" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Effect.h" },
	};
#endif
	void Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_ApplyHeatSkillScale_SetBit(void* Obj)
	{
		((UELSSAnimNotify_Effect*)Obj)->ApplyHeatSkillScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_ApplyHeatSkillScale = { "ApplyHeatSkillScale", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSAnimNotify_Effect), &Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_ApplyHeatSkillScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_ApplyHeatSkillScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_ApplyHeatSkillScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_EffectRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::NewProp_ApplyHeatSkillScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotify_Effect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::ClassParams = {
		&UELSSAnimNotify_Effect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotify_Effect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotify_Effect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotify_Effect, 3287969082);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotify_Effect>()
	{
		return UELSSAnimNotify_Effect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotify_Effect(Z_Construct_UClass_UELSSAnimNotify_Effect, &UELSSAnimNotify_Effect::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotify_Effect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotify_Effect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
