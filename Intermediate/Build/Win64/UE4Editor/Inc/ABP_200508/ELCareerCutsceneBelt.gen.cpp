// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerCutsceneBelt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerCutsceneBelt() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerCutsceneBelt_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerCutsceneBelt();
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneWeaponBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneBeltType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerCutsceneBelt::execAttach)
	{
		P_GET_ENUM(ECareerCutsceneCastType,Z_Param_InCast);
		P_GET_PROPERTY(FNameProperty,Z_Param_InAttachBone);
		P_GET_ENUM(ECareerCutsceneBeltType,Z_Param_InBletType);
		P_GET_OBJECT(UAnimMontage,Z_Param_InAnimMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attach(ECareerCutsceneCastType(Z_Param_InCast),Z_Param_InAttachBone,ECareerCutsceneBeltType(Z_Param_InBletType),Z_Param_InAnimMontage);
		P_NATIVE_END;
	}
	static FName NAME_AELCareerCutsceneBelt_GetMesh = FName(TEXT("GetMesh"));
	UMeshComponent* AELCareerCutsceneBelt::GetMesh(ECareerCutsceneCastType Cast)
	{
		ELCareerCutsceneBelt_eventGetMesh_Parms Parms;
		Parms.Cast=Cast;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerCutsceneBelt_GetMesh),&Parms);
		return Parms.ReturnValue;
	}
	void AELCareerCutsceneBelt::StaticRegisterNativesAELCareerCutsceneBelt()
	{
		UClass* Class = AELCareerCutsceneBelt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attach", &AELCareerCutsceneBelt::execAttach },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics
	{
		struct ELCareerCutsceneBelt_eventAttach_Parms
		{
			ECareerCutsceneCastType InCast;
			FName InAttachBone;
			ECareerCutsceneBeltType InBletType;
			UAnimMontage* InAnimMontage;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCast_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCast;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAttachBone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBletType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InBletType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InCast_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InCast = { "InCast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCutsceneBelt_eventAttach_Parms, InCast), Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InAttachBone = { "InAttachBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCutsceneBelt_eventAttach_Parms, InAttachBone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InBletType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InBletType = { "InBletType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCutsceneBelt_eventAttach_Parms, InBletType), Z_Construct_UEnum_ABP_200508_ECareerCutsceneBeltType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InAnimMontage = { "InAnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCutsceneBelt_eventAttach_Parms, InAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InCast_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InCast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InAttachBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InBletType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InBletType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::NewProp_InAnimMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerCutsceneBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerCutsceneBelt, nullptr, "Attach", nullptr, nullptr, sizeof(ELCareerCutsceneBelt_eventAttach_Parms), Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerCutsceneBelt_Attach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerCutsceneBelt_Attach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cast_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_Cast_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_Cast = { "Cast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCutsceneBelt_eventGetMesh_Parms, Cast), Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCutsceneBelt_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_Cast_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_Cast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerCutsceneBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerCutsceneBelt, nullptr, "GetMesh", nullptr, nullptr, sizeof(ELCareerCutsceneBelt_eventGetMesh_Parms), Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerCutsceneBelt_NoRegister()
	{
		return AELCareerCutsceneBelt::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerCutsceneBelt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerCutsceneBelt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELEntranceCutsceneWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerCutsceneBelt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerCutsceneBelt_Attach, "Attach" }, // 4155321217
		{ &Z_Construct_UFunction_AELCareerCutsceneBelt_GetMesh, "GetMesh" }, // 197784857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerCutsceneBelt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerCutsceneBelt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerCutsceneBelt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerCutsceneBelt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerCutsceneBelt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerCutsceneBelt_Statics::ClassParams = {
		&AELCareerCutsceneBelt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerCutsceneBelt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerCutsceneBelt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerCutsceneBelt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerCutsceneBelt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerCutsceneBelt, 3130234240);
	template<> ABP_200508_API UClass* StaticClass<AELCareerCutsceneBelt>()
	{
		return AELCareerCutsceneBelt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerCutsceneBelt(Z_Construct_UClass_AELCareerCutsceneBelt, &AELCareerCutsceneBelt::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerCutsceneBelt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerCutsceneBelt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
